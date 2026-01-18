/**
 * Unit tests for Tree-sitter Stata grammar and query files.
 *
 * Focused on grammar.js and queries/*.scm in the tree-sitter-stata repo.
 */

import { describe, it, expect, beforeAll } from 'bun:test';
import * as fs from 'fs';
import * as path from 'path';

// ============================================================================
// Test Setup - Load all files
// ============================================================================

const ROOT_DIR = path.join(import.meta.dir, '../..');
const GRAMMAR_PATH = path.join(ROOT_DIR, 'grammar.js');
const HIGHLIGHTS_PATH = path.join(ROOT_DIR, 'queries/highlights.scm');
const BRACKETS_PATH = path.join(ROOT_DIR, 'queries/brackets.scm');
const INDENTS_PATH = path.join(ROOT_DIR, 'queries/indents.scm');

let grammar_content: string;
let highlights_content: string;
let brackets_content: string;
let indents_content: string;

beforeAll(() => {
    grammar_content = fs.readFileSync(GRAMMAR_PATH, 'utf8');
    highlights_content = fs.readFileSync(HIGHLIGHTS_PATH, 'utf8');
    brackets_content = fs.readFileSync(BRACKETS_PATH, 'utf8');
    indents_content = fs.readFileSync(INDENTS_PATH, 'utf8');
});

// ============================================================================
// Comment Parsing Tests
// ============================================================================

describe('Grammar - Comment Parsing', () => {
    it('should define line_comment rule', () => {
        expect(grammar_content).toContain('line_comment:');
    });

    it('should support // line comments', () => {
        expect(grammar_content).toContain("'//'");
    });

    it('should support /// continuation comments', () => {
        expect(grammar_content).toContain("'///'");
    });

    it('should support * star comments at line start', () => {
        expect(grammar_content).toContain('$._line_start');
    });

    it('should define block_comment rule', () => {
        expect(grammar_content).toContain('block_comment:');
        expect(grammar_content).toContain("'/*'");
    });
});

// ============================================================================
// String Parsing Tests
// ============================================================================

describe('Grammar - String Parsing', () => {
    it('should define double_string rule', () => {
        expect(grammar_content).toContain('double_string:');
    });

    it('should define compound_string_depth_1 through depth_6', () => {
        for (let depth = 1; depth <= 6; depth++) {
            expect(grammar_content).toContain(`compound_string_depth_${depth}:`);
        }
    });

    it('should allow global macros inside double strings', () => {
        expect(grammar_content).toMatch(/double_string:.*\$\.global_macro/s);
    });
});

// ============================================================================
// Macro Parsing Tests
// ============================================================================

describe('Grammar - Macro Parsing', () => {
    it('should define local_macro_depth_1 through depth_6', () => {
        for (let depth = 1; depth <= 6; depth++) {
            expect(grammar_content).toContain(`local_macro_depth_${depth}:`);
        }
    });

    it('should define global_macro rule', () => {
        expect(grammar_content).toContain('global_macro:');
    });
});

// ============================================================================
// Query File Coverage Tests
// ============================================================================

describe('Queries - highlights.scm coverage', () => {
    it('should have comment captures', () => {
        expect(highlights_content).toContain('(line_comment) @comment');
        expect(highlights_content).toContain('(block_comment) @comment');
    });

    it('should have string captures', () => {
        expect(highlights_content).toContain('(double_string) @string');
    });

    it('should have depth-based compound string captures (1-6)', () => {
        for (let depth = 1; depth <= 6; depth++) {
            expect(highlights_content).toContain(`(compound_string_depth_${depth}) @string.depth.${depth}`);
        }
    });

    it('should have depth-based local macro captures (1-6)', () => {
        for (let depth = 1; depth <= 6; depth++) {
            expect(highlights_content).toContain(`(local_macro_depth_${depth}) @variable.macro.local.depth.${depth}`);
        }
    });

    it('should have global macro capture', () => {
        expect(highlights_content).toContain('(global_macro) @variable');
    });

    it('should have type captures', () => {
        expect(highlights_content).toContain('(type_keyword) @type');
    });
});

describe('Queries - brackets.scm coverage', () => {
    it('should have curly brace matching', () => {
        expect(brackets_content).toContain('\"{\" @open');
        expect(brackets_content).toContain('\"}\" @close');
    });

    it('should have square bracket matching', () => {
        expect(brackets_content).toContain('(lbracket) @open');
        expect(brackets_content).toContain('(rbracket) @close');
    });

    it('should have parenthesis matching', () => {
        expect(brackets_content).toContain('(lparen) @open');
        expect(brackets_content).toContain('(rparen) @close');
    });

    it('should have quote matching', () => {
        expect(brackets_content).toContain('("\\"" @open "\\"" @close)');
        expect(brackets_content).toContain('("`" @open "\'" @close)');
    });
});

describe('Queries - indents.scm coverage', () => {
    it('should have indent rules for program definitions', () => {
        expect(indents_content).toContain('(program_definition) @indent');
    });

    it('should have indent rules for mata blocks', () => {
        expect(indents_content).toContain('(mata_block) @indent');
    });

    it('should have outdent rules for closing braces', () => {
        expect(indents_content).toContain('\"}\" @outdent');
    });

    it('should have outdent rules for end keyword', () => {
        expect(indents_content).toContain('\"end\" @outdent');
    });
});

/**
 * Property-Based Tests for Tree-sitter Stata grammar
 *
 * Validates core grammar constructs by inspecting grammar.js content.
 */

import { describe, it, expect, beforeAll } from 'bun:test';
import * as fc from 'fast-check';
import * as fs from 'fs';
import * as path from 'path';

const ROOT_DIR = path.join(import.meta.dir, '../..');
const GRAMMAR_PATH = path.join(ROOT_DIR, 'grammar.js');

let grammar_content: string;

beforeAll(() => {
    grammar_content = fs.readFileSync(GRAMMAR_PATH, 'utf8');
});

function grammar_has_rule(rule_name: string): boolean {
    const pattern = new RegExp(rule_name + ':\\s*[$_]\\s*=>');
    return pattern.test(grammar_content);
}

function arbitrary_stata_identifier(): fc.Arbitrary<string> {
    return fc.tuple(
        fc.constantFrom(...'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_'.split('')),
        fc.stringOf(
            fc.constantFrom(...'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_'.split('')),
            { minLength: 0, maxLength: 20 }
        )
    ).map(([first, rest]) => first + rest);
}

function arbitrary_depth(): fc.Arbitrary<number> {
    return fc.integer({ min: 1, max: 6 });
}

describe('Property: Grammar rules exist for core constructs', () => {
    it('should define key rules', () => {
        expect(grammar_has_rule('line_comment')).toBe(true);
        expect(grammar_has_rule('block_comment')).toBe(true);
        expect(grammar_has_rule('double_string')).toBe(true);
        expect(grammar_has_rule('global_macro')).toBe(true);
        expect(grammar_has_rule('program_definition')).toBe(true);
        expect(grammar_has_rule('mata_block')).toBe(true);
    });

    it('should define local macro depth rules 1-6', () => {
        fc.assert(
            fc.property(arbitrary_depth(), (depth) => {
                expect(grammar_content).toContain(`local_macro_depth_${depth}:`);
                return true;
            })
        );
    });
});

describe('Property: Identifiers follow Stata pattern', () => {
    it('should define identifier rule', () => {
        expect(grammar_has_rule('identifier')).toBe(true);
        expect(grammar_content).toMatch(/identifier:.*\/\[A-Za-z_\]\[A-Za-z0-9_\]\*\//s);
    });

    it('should generate valid identifiers', () => {
        fc.assert(
            fc.property(arbitrary_stata_identifier(), (name) => {
                expect(/^[A-Za-z_][A-Za-z0-9_]*$/.test(name)).toBe(true);
                return true;
            })
        );
    });
});

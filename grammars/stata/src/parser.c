#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__newline = 2,
  aux_sym_line_comment_token1 = 3,
  aux_sym_line_comment_token2 = 4,
  anon_sym_STAR = 5,
  aux_sym_line_comment_token3 = 6,
  sym_block_comment = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_double_string_token1 = 9,
  aux_sym_double_string_token2 = 10,
  anon_sym_DQUOTE_DQUOTE = 11,
  anon_sym_BQUOTE_DQUOTE = 12,
  anon_sym_DQUOTE_SQUOTE = 13,
  sym__compound_text = 14,
  anon_sym_BQUOTE = 15,
  anon_sym_SQUOTE = 16,
  aux_sym__macro_name_token1 = 17,
  anon_sym_DOLLAR = 18,
  anon_sym_DOLLAR_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_program = 21,
  anon_sym_define = 22,
  anon_sym_end = 23,
  anon_sym_mata = 24,
  anon_sym_COLON = 25,
  anon_sym_LBRACE = 26,
  aux_sym__mata_line_token1 = 27,
  sym__mata_inline_content = 28,
  sym__mata_brace_content = 29,
  anon_sym_local = 30,
  anon_sym_loc = 31,
  anon_sym_global = 32,
  anon_sym_gl = 33,
  anon_sym_tempvar = 34,
  anon_sym_tempname = 35,
  anon_sym_tempfile = 36,
  anon_sym_by = 37,
  anon_sym_bysort = 38,
  anon_sym_bys = 39,
  anon_sym_quietly = 40,
  anon_sym_qui = 41,
  anon_sym_noisily = 42,
  anon_sym_noi = 43,
  anon_sym_capture = 44,
  anon_sym_cap = 45,
  anon_sym_sortpreserve = 46,
  aux_sym__argument_token1 = 47,
  anon_sym_if = 48,
  anon_sym_else = 49,
  anon_sym_foreach = 50,
  anon_sym_forvalues = 51,
  anon_sym_forv = 52,
  anon_sym_while = 53,
  anon_sym_continue = 54,
  anon_sym_break = 55,
  anon_sym_byte = 56,
  anon_sym_int = 57,
  anon_sym_long = 58,
  anon_sym_float = 59,
  anon_sym_double = 60,
  aux_sym_type_keyword_token1 = 61,
  aux_sym_type_keyword_token2 = 62,
  aux_sym_type_keyword_token3 = 63,
  aux_sym_type_keyword_token4 = 64,
  aux_sym_type_keyword_token5 = 65,
  aux_sym_type_keyword_token6 = 66,
  anon_sym_strL = 67,
  sym_number = 68,
  sym_missing_value = 69,
  anon_sym__n = 70,
  anon_sym__N = 71,
  anon_sym__b = 72,
  anon_sym__coef = 73,
  anon_sym__cons = 74,
  anon_sym__rc = 75,
  anon_sym__se = 76,
  anon_sym__pi = 77,
  anon_sym__skip = 78,
  anon_sym__dup = 79,
  anon_sym__newline = 80,
  anon_sym__column = 81,
  anon_sym__continue = 82,
  anon_sym__request = 83,
  anon_sym__char = 84,
  anon_sym_PLUS = 85,
  anon_sym_DASH = 86,
  anon_sym_SLASH = 87,
  anon_sym_CARET = 88,
  anon_sym_EQ_EQ = 89,
  anon_sym_BANG_EQ = 90,
  anon_sym_TILDE_EQ = 91,
  anon_sym_LT = 92,
  anon_sym_GT = 93,
  anon_sym_LT_EQ = 94,
  anon_sym_GT_EQ = 95,
  anon_sym_AMP = 96,
  anon_sym_PIPE = 97,
  anon_sym_BANG = 98,
  anon_sym_TILDE = 99,
  anon_sym_EQ = 100,
  anon_sym_POUND = 101,
  anon_sym_LBRACK = 102,
  anon_sym_RBRACK = 103,
  anon_sym_LPAREN = 104,
  anon_sym_RPAREN = 105,
  sym__line_start = 106,
  sym_source_file = 107,
  sym__line = 108,
  sym__statement = 109,
  sym_comment = 110,
  sym_line_comment = 111,
  sym_double_string = 112,
  sym_compound_string_depth_1 = 113,
  sym__compound_content_1 = 114,
  sym_compound_string_depth_2 = 115,
  sym__compound_content_2 = 116,
  sym_compound_string_depth_3 = 117,
  sym__compound_content_3 = 118,
  sym_compound_string_depth_4 = 119,
  sym__compound_content_4 = 120,
  sym_compound_string_depth_5 = 121,
  sym__compound_content_5 = 122,
  sym_compound_string_depth_6 = 123,
  sym__compound_content_6 = 124,
  sym_string = 125,
  sym_local_macro_depth_1 = 126,
  sym_local_macro_depth_2 = 127,
  sym_local_macro_depth_3 = 128,
  sym_local_macro_depth_4 = 129,
  sym_local_macro_depth_5 = 130,
  sym_local_macro_depth_6 = 131,
  sym__macro_name = 132,
  sym_global_macro = 133,
  sym_program_definition = 134,
  sym__program_line = 135,
  sym_mata_block = 136,
  sym__mata_line = 137,
  sym_macro_definition = 138,
  sym_command = 139,
  sym_prefix = 140,
  sym__argument = 141,
  sym_control_keyword = 142,
  sym_type_keyword = 143,
  sym_builtin_variable = 144,
  sym_operator = 145,
  aux_sym_source_file_repeat1 = 146,
  aux_sym_double_string_repeat1 = 147,
  aux_sym_compound_string_depth_1_repeat1 = 148,
  aux_sym_compound_string_depth_2_repeat1 = 149,
  aux_sym_compound_string_depth_3_repeat1 = 150,
  aux_sym_compound_string_depth_4_repeat1 = 151,
  aux_sym_compound_string_depth_5_repeat1 = 152,
  aux_sym_compound_string_depth_6_repeat1 = 153,
  aux_sym_program_definition_repeat1 = 154,
  aux_sym_mata_block_repeat1 = 155,
  aux_sym_mata_block_repeat2 = 156,
  aux_sym_macro_definition_repeat1 = 157,
  aux_sym_macro_definition_repeat2 = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__newline] = "_newline",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [anon_sym_STAR] = "*",
  [aux_sym_line_comment_token3] = "line_comment_token3",
  [sym_block_comment] = "block_comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_string_token1] = "double_string_token1",
  [aux_sym_double_string_token2] = "double_string_token2",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_BQUOTE_DQUOTE] = "`\"",
  [anon_sym_DQUOTE_SQUOTE] = "\"'",
  [sym__compound_text] = "_compound_text",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__macro_name_token1] = "_macro_name_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_program] = "program",
  [anon_sym_define] = "define",
  [anon_sym_end] = "end",
  [anon_sym_mata] = "mata",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [aux_sym__mata_line_token1] = "_mata_line_token1",
  [sym__mata_inline_content] = "_mata_inline_content",
  [sym__mata_brace_content] = "_mata_brace_content",
  [anon_sym_local] = "local",
  [anon_sym_loc] = "loc",
  [anon_sym_global] = "global",
  [anon_sym_gl] = "gl",
  [anon_sym_tempvar] = "tempvar",
  [anon_sym_tempname] = "tempname",
  [anon_sym_tempfile] = "tempfile",
  [anon_sym_by] = "by",
  [anon_sym_bysort] = "bysort",
  [anon_sym_bys] = "bys",
  [anon_sym_quietly] = "quietly",
  [anon_sym_qui] = "qui",
  [anon_sym_noisily] = "noisily",
  [anon_sym_noi] = "noi",
  [anon_sym_capture] = "capture",
  [anon_sym_cap] = "cap",
  [anon_sym_sortpreserve] = "sortpreserve",
  [aux_sym__argument_token1] = "_argument_token1",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_foreach] = "foreach",
  [anon_sym_forvalues] = "forvalues",
  [anon_sym_forv] = "forv",
  [anon_sym_while] = "while",
  [anon_sym_continue] = "continue",
  [anon_sym_break] = "break",
  [anon_sym_byte] = "byte",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [aux_sym_type_keyword_token1] = "type_keyword_token1",
  [aux_sym_type_keyword_token2] = "type_keyword_token2",
  [aux_sym_type_keyword_token3] = "type_keyword_token3",
  [aux_sym_type_keyword_token4] = "type_keyword_token4",
  [aux_sym_type_keyword_token5] = "type_keyword_token5",
  [aux_sym_type_keyword_token6] = "type_keyword_token6",
  [anon_sym_strL] = "strL",
  [sym_number] = "number",
  [sym_missing_value] = "missing_value",
  [anon_sym__n] = "_n",
  [anon_sym__N] = "_N",
  [anon_sym__b] = "_b",
  [anon_sym__coef] = "_coef",
  [anon_sym__cons] = "_cons",
  [anon_sym__rc] = "_rc",
  [anon_sym__se] = "_se",
  [anon_sym__pi] = "_pi",
  [anon_sym__skip] = "_skip",
  [anon_sym__dup] = "_dup",
  [anon_sym__newline] = "_newline",
  [anon_sym__column] = "_column",
  [anon_sym__continue] = "_continue",
  [anon_sym__request] = "_request",
  [anon_sym__char] = "_char",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "lbracket",
  [anon_sym_RBRACK] = "rbracket",
  [anon_sym_LPAREN] = "lparen",
  [anon_sym_RPAREN] = "rparen",
  [sym__line_start] = "_line_start",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_double_string] = "double_string",
  [sym_compound_string_depth_1] = "compound_string_depth_1",
  [sym__compound_content_1] = "_compound_content_1",
  [sym_compound_string_depth_2] = "compound_string_depth_2",
  [sym__compound_content_2] = "_compound_content_2",
  [sym_compound_string_depth_3] = "compound_string_depth_3",
  [sym__compound_content_3] = "_compound_content_3",
  [sym_compound_string_depth_4] = "compound_string_depth_4",
  [sym__compound_content_4] = "_compound_content_4",
  [sym_compound_string_depth_5] = "compound_string_depth_5",
  [sym__compound_content_5] = "_compound_content_5",
  [sym_compound_string_depth_6] = "compound_string_depth_6",
  [sym__compound_content_6] = "_compound_content_6",
  [sym_string] = "string",
  [sym_local_macro_depth_1] = "local_macro_depth_1",
  [sym_local_macro_depth_2] = "local_macro_depth_2",
  [sym_local_macro_depth_3] = "local_macro_depth_3",
  [sym_local_macro_depth_4] = "local_macro_depth_4",
  [sym_local_macro_depth_5] = "local_macro_depth_5",
  [sym_local_macro_depth_6] = "local_macro_depth_6",
  [sym__macro_name] = "_macro_name",
  [sym_global_macro] = "global_macro",
  [sym_program_definition] = "program_definition",
  [sym__program_line] = "_program_line",
  [sym_mata_block] = "mata_block",
  [sym__mata_line] = "_mata_line",
  [sym_macro_definition] = "macro_definition",
  [sym_command] = "command",
  [sym_prefix] = "prefix",
  [sym__argument] = "_argument",
  [sym_control_keyword] = "control_keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_builtin_variable] = "builtin_variable",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_double_string_repeat1] = "double_string_repeat1",
  [aux_sym_compound_string_depth_1_repeat1] = "compound_string_depth_1_repeat1",
  [aux_sym_compound_string_depth_2_repeat1] = "compound_string_depth_2_repeat1",
  [aux_sym_compound_string_depth_3_repeat1] = "compound_string_depth_3_repeat1",
  [aux_sym_compound_string_depth_4_repeat1] = "compound_string_depth_4_repeat1",
  [aux_sym_compound_string_depth_5_repeat1] = "compound_string_depth_5_repeat1",
  [aux_sym_compound_string_depth_6_repeat1] = "compound_string_depth_6_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [aux_sym_mata_block_repeat1] = "mata_block_repeat1",
  [aux_sym_mata_block_repeat2] = "mata_block_repeat2",
  [aux_sym_macro_definition_repeat1] = "macro_definition_repeat1",
  [aux_sym_macro_definition_repeat2] = "macro_definition_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__newline] = sym__newline,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_line_comment_token3] = aux_sym_line_comment_token3,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_string_token1] = aux_sym_double_string_token1,
  [aux_sym_double_string_token2] = aux_sym_double_string_token2,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE_DQUOTE] = anon_sym_BQUOTE_DQUOTE,
  [anon_sym_DQUOTE_SQUOTE] = anon_sym_DQUOTE_SQUOTE,
  [sym__compound_text] = sym__compound_text,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__macro_name_token1] = aux_sym__macro_name_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_program] = anon_sym_program,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_mata] = anon_sym_mata,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__mata_line_token1] = aux_sym__mata_line_token1,
  [sym__mata_inline_content] = sym__mata_inline_content,
  [sym__mata_brace_content] = sym__mata_brace_content,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_loc] = anon_sym_loc,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_gl] = anon_sym_gl,
  [anon_sym_tempvar] = anon_sym_tempvar,
  [anon_sym_tempname] = anon_sym_tempname,
  [anon_sym_tempfile] = anon_sym_tempfile,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_bysort] = anon_sym_bysort,
  [anon_sym_bys] = anon_sym_bys,
  [anon_sym_quietly] = anon_sym_quietly,
  [anon_sym_qui] = anon_sym_qui,
  [anon_sym_noisily] = anon_sym_noisily,
  [anon_sym_noi] = anon_sym_noi,
  [anon_sym_capture] = anon_sym_capture,
  [anon_sym_cap] = anon_sym_cap,
  [anon_sym_sortpreserve] = anon_sym_sortpreserve,
  [aux_sym__argument_token1] = aux_sym__argument_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_forvalues] = anon_sym_forvalues,
  [anon_sym_forv] = anon_sym_forv,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [aux_sym_type_keyword_token1] = aux_sym_type_keyword_token1,
  [aux_sym_type_keyword_token2] = aux_sym_type_keyword_token2,
  [aux_sym_type_keyword_token3] = aux_sym_type_keyword_token3,
  [aux_sym_type_keyword_token4] = aux_sym_type_keyword_token4,
  [aux_sym_type_keyword_token5] = aux_sym_type_keyword_token5,
  [aux_sym_type_keyword_token6] = aux_sym_type_keyword_token6,
  [anon_sym_strL] = anon_sym_strL,
  [sym_number] = sym_number,
  [sym_missing_value] = sym_missing_value,
  [anon_sym__n] = anon_sym__n,
  [anon_sym__N] = anon_sym__N,
  [anon_sym__b] = anon_sym__b,
  [anon_sym__coef] = anon_sym__coef,
  [anon_sym__cons] = anon_sym__cons,
  [anon_sym__rc] = anon_sym__rc,
  [anon_sym__se] = anon_sym__se,
  [anon_sym__pi] = anon_sym__pi,
  [anon_sym__skip] = anon_sym__skip,
  [anon_sym__dup] = anon_sym__dup,
  [anon_sym__newline] = anon_sym__newline,
  [anon_sym__column] = anon_sym__column,
  [anon_sym__continue] = anon_sym__continue,
  [anon_sym__request] = anon_sym__request,
  [anon_sym__char] = anon_sym__char,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__line_start] = sym__line_start,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_double_string] = sym_double_string,
  [sym_compound_string_depth_1] = sym_compound_string_depth_1,
  [sym__compound_content_1] = sym__compound_content_1,
  [sym_compound_string_depth_2] = sym_compound_string_depth_2,
  [sym__compound_content_2] = sym__compound_content_2,
  [sym_compound_string_depth_3] = sym_compound_string_depth_3,
  [sym__compound_content_3] = sym__compound_content_3,
  [sym_compound_string_depth_4] = sym_compound_string_depth_4,
  [sym__compound_content_4] = sym__compound_content_4,
  [sym_compound_string_depth_5] = sym_compound_string_depth_5,
  [sym__compound_content_5] = sym__compound_content_5,
  [sym_compound_string_depth_6] = sym_compound_string_depth_6,
  [sym__compound_content_6] = sym__compound_content_6,
  [sym_string] = sym_string,
  [sym_local_macro_depth_1] = sym_local_macro_depth_1,
  [sym_local_macro_depth_2] = sym_local_macro_depth_2,
  [sym_local_macro_depth_3] = sym_local_macro_depth_3,
  [sym_local_macro_depth_4] = sym_local_macro_depth_4,
  [sym_local_macro_depth_5] = sym_local_macro_depth_5,
  [sym_local_macro_depth_6] = sym_local_macro_depth_6,
  [sym__macro_name] = sym__macro_name,
  [sym_global_macro] = sym_global_macro,
  [sym_program_definition] = sym_program_definition,
  [sym__program_line] = sym__program_line,
  [sym_mata_block] = sym_mata_block,
  [sym__mata_line] = sym__mata_line,
  [sym_macro_definition] = sym_macro_definition,
  [sym_command] = sym_command,
  [sym_prefix] = sym_prefix,
  [sym__argument] = sym__argument,
  [sym_control_keyword] = sym_control_keyword,
  [sym_type_keyword] = sym_type_keyword,
  [sym_builtin_variable] = sym_builtin_variable,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_double_string_repeat1] = aux_sym_double_string_repeat1,
  [aux_sym_compound_string_depth_1_repeat1] = aux_sym_compound_string_depth_1_repeat1,
  [aux_sym_compound_string_depth_2_repeat1] = aux_sym_compound_string_depth_2_repeat1,
  [aux_sym_compound_string_depth_3_repeat1] = aux_sym_compound_string_depth_3_repeat1,
  [aux_sym_compound_string_depth_4_repeat1] = aux_sym_compound_string_depth_4_repeat1,
  [aux_sym_compound_string_depth_5_repeat1] = aux_sym_compound_string_depth_5_repeat1,
  [aux_sym_compound_string_depth_6_repeat1] = aux_sym_compound_string_depth_6_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [aux_sym_mata_block_repeat1] = aux_sym_mata_block_repeat1,
  [aux_sym_mata_block_repeat2] = aux_sym_mata_block_repeat2,
  [aux_sym_macro_definition_repeat1] = aux_sym_macro_definition_repeat1,
  [aux_sym_macro_definition_repeat2] = aux_sym_macro_definition_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__compound_text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__macro_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_program] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__mata_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__mata_inline_content] = {
    .visible = false,
    .named = true,
  },
  [sym__mata_brace_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bysort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quietly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noisily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sortpreserve] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_keyword_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_keyword_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_keyword_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_keyword_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_strL] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_missing_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__coef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__cons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__rc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__se] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__skip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__dup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__newline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__column] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__request] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym__line_start] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_string] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_string_depth_1] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_1] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_string_depth_2] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_2] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_string_depth_3] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_3] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_string_depth_4] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_4] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_string_depth_5] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_5] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_string_depth_6] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_content_6] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_1] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_2] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_3] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_4] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_5] = {
    .visible = true,
    .named = true,
  },
  [sym_local_macro_depth_6] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_name] = {
    .visible = false,
    .named = true,
  },
  [sym_global_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_program_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__program_line] = {
    .visible = false,
    .named = true,
  },
  [sym_mata_block] = {
    .visible = true,
    .named = true,
  },
  [sym__mata_line] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_control_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_4_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_5_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_string_depth_6_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mata_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mata_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1, .inherited = true},
  [3] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [5] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 52,
  [59] = 59,
  [60] = 55,
  [61] = 61,
  [62] = 54,
  [63] = 10,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 19,
  [69] = 11,
  [70] = 70,
  [71] = 20,
  [72] = 18,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 12,
  [79] = 13,
  [80] = 11,
  [81] = 19,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 20,
  [129] = 101,
  [130] = 11,
  [131] = 19,
  [132] = 132,
  [133] = 133,
  [134] = 121,
  [135] = 135,
  [136] = 136,
  [137] = 104,
  [138] = 101,
  [139] = 121,
  [140] = 104,
  [141] = 141,
  [142] = 121,
  [143] = 101,
  [144] = 144,
  [145] = 126,
  [146] = 146,
  [147] = 126,
  [148] = 126,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '\n', 15,
        '\r', 1,
        '!', 80,
        '"', 24,
        '#', 83,
        '$', 39,
        '&', 78,
        '\'', 36,
        '(', 86,
        ')', 87,
        '*', 18,
        '+', 67,
        '-', 68,
        '.', 63,
        '/', 69,
        ':', 44,
        '<', 74,
        '=', 82,
        '>', 75,
        '[', 84,
        ']', 85,
        '^', 70,
        '`', 35,
        'e', 65,
        '{', 45,
        '|', 79,
        '}', 41,
        '~', 81,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 15,
        '\r', 1,
        '!', 80,
        '"', 22,
        '#', 83,
        '$', 39,
        '&', 78,
        '(', 86,
        ')', 87,
        '*', 18,
        '+', 67,
        '-', 68,
        '.', 63,
        '/', 69,
        '<', 74,
        '=', 82,
        '>', 75,
        '[', 84,
        ']', 85,
        '^', 70,
        '`', 35,
        'e', 65,
        '|', 79,
        '~', 81,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_double_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_double_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_double_string_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BQUOTE_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__compound_text);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__compound_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '"') ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__macro_name_token1);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__macro_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__mata_line_token1);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__mata_line_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__mata_line_token1);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__mata_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__mata_inline_content);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__mata_inline_content);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__mata_inline_content);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__mata_inline_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__mata_brace_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__mata_brace_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_missing_value);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_missing_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        '_', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'g', 7,
        'i', 8,
        'l', 9,
        'm', 10,
        'n', 11,
        'p', 12,
        'q', 13,
        's', 14,
        't', 15,
        'w', 16,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        'N', 17,
        'b', 18,
        'c', 19,
        'd', 20,
        'n', 21,
        'p', 22,
        'r', 23,
        's', 24,
      );
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym__N);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym__b);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym__n);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_gl);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym__pi);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym__rc);
      END_STATE();
    case 52:
      if (lookahead == 'q') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym__se);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_bys);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_cap);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_loc);
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_noi);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_qui);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == '1') ADVANCE(104);
      if (lookahead == '2') ADVANCE(105);
      if (lookahead == 'L') ADVANCE(106);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym__dup);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_forv);
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_mata);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_type_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_type_keyword_token1);
      if (lookahead == '0') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_strL);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_type_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym__char);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym__coef);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym__cons);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym__skip);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_type_keyword_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_type_keyword_token2);
      if (lookahead == '4') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(158);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_type_keyword_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bysort);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_type_keyword_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_type_keyword_token3);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_type_keyword_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_type_keyword_token3);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym__column);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_noisily);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_quietly);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_type_keyword_token4);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_type_keyword_token6);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_type_keyword_token5);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_tempvar);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym__newline);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym__request);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_tempfile);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_tempname);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym__continue);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_forvalues);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_sortpreserve);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 1},
  [22] = {.lex_state = 3, .external_lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 3, .external_lex_state = 1},
  [25] = {.lex_state = 3, .external_lex_state = 1},
  [26] = {.lex_state = 13, .external_lex_state = 1},
  [27] = {.lex_state = 13, .external_lex_state = 1},
  [28] = {.lex_state = 13, .external_lex_state = 1},
  [29] = {.lex_state = 3, .external_lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 47},
  [84] = {.lex_state = 47},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 47},
  [87] = {.lex_state = 47},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 47},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__macro_name_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_program] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_mata] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_loc] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_gl] = ACTIONS(1),
    [anon_sym_tempvar] = ACTIONS(1),
    [anon_sym_tempname] = ACTIONS(1),
    [anon_sym_tempfile] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_bysort] = ACTIONS(1),
    [anon_sym_bys] = ACTIONS(1),
    [anon_sym_quietly] = ACTIONS(1),
    [anon_sym_qui] = ACTIONS(1),
    [anon_sym_noisily] = ACTIONS(1),
    [anon_sym_noi] = ACTIONS(1),
    [anon_sym_capture] = ACTIONS(1),
    [anon_sym_cap] = ACTIONS(1),
    [anon_sym_sortpreserve] = ACTIONS(1),
    [aux_sym__argument_token1] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_forvalues] = ACTIONS(1),
    [anon_sym_forv] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [aux_sym_type_keyword_token1] = ACTIONS(1),
    [aux_sym_type_keyword_token2] = ACTIONS(1),
    [aux_sym_type_keyword_token3] = ACTIONS(1),
    [aux_sym_type_keyword_token4] = ACTIONS(1),
    [aux_sym_type_keyword_token5] = ACTIONS(1),
    [aux_sym_type_keyword_token6] = ACTIONS(1),
    [anon_sym_strL] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_missing_value] = ACTIONS(1),
    [anon_sym__n] = ACTIONS(1),
    [anon_sym__N] = ACTIONS(1),
    [anon_sym__b] = ACTIONS(1),
    [anon_sym__coef] = ACTIONS(1),
    [anon_sym__cons] = ACTIONS(1),
    [anon_sym__rc] = ACTIONS(1),
    [anon_sym__se] = ACTIONS(1),
    [anon_sym__pi] = ACTIONS(1),
    [anon_sym__skip] = ACTIONS(1),
    [anon_sym__dup] = ACTIONS(1),
    [anon_sym__newline] = ACTIONS(1),
    [anon_sym__column] = ACTIONS(1),
    [anon_sym__continue] = ACTIONS(1),
    [anon_sym__request] = ACTIONS(1),
    [anon_sym__char] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(103),
    [sym__line] = STATE(26),
    [sym__statement] = STATE(141),
    [sym_comment] = STATE(141),
    [sym_line_comment] = STATE(133),
    [sym_program_definition] = STATE(141),
    [sym_mata_block] = STATE(141),
    [sym_macro_definition] = STATE(141),
    [sym_command] = STATE(141),
    [sym_prefix] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [aux_sym_line_comment_token1] = ACTIONS(9),
    [aux_sym_line_comment_token2] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(13),
    [anon_sym_program] = ACTIONS(15),
    [anon_sym_mata] = ACTIONS(17),
    [anon_sym_local] = ACTIONS(19),
    [anon_sym_loc] = ACTIONS(19),
    [anon_sym_global] = ACTIONS(19),
    [anon_sym_gl] = ACTIONS(19),
    [anon_sym_tempvar] = ACTIONS(21),
    [anon_sym_tempname] = ACTIONS(21),
    [anon_sym_tempfile] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(23),
    [anon_sym_bysort] = ACTIONS(23),
    [anon_sym_bys] = ACTIONS(23),
    [anon_sym_quietly] = ACTIONS(23),
    [anon_sym_qui] = ACTIONS(23),
    [anon_sym_noisily] = ACTIONS(23),
    [anon_sym_noi] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(23),
    [anon_sym_cap] = ACTIONS(23),
    [anon_sym_sortpreserve] = ACTIONS(23),
    [sym__line_start] = ACTIONS(25),
  },
  [2] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(5),
    [sym_local_macro_depth_1] = STATE(5),
    [sym_global_macro] = STATE(5),
    [sym__argument] = STATE(5),
    [sym_control_keyword] = STATE(5),
    [sym_type_keyword] = STATE(5),
    [sym_builtin_variable] = STATE(5),
    [sym_operator] = STATE(5),
    [aux_sym_macro_definition_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(27),
    [sym__newline] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [sym_missing_value] = ACTIONS(27),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [3] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(6),
    [sym_local_macro_depth_1] = STATE(6),
    [sym_global_macro] = STATE(6),
    [sym__argument] = STATE(6),
    [sym_control_keyword] = STATE(6),
    [sym_type_keyword] = STATE(6),
    [sym_builtin_variable] = STATE(6),
    [sym_operator] = STATE(6),
    [aux_sym_macro_definition_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(53),
    [sym__newline] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(57),
    [sym_missing_value] = ACTIONS(53),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [4] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(3),
    [sym_local_macro_depth_1] = STATE(3),
    [sym_global_macro] = STATE(3),
    [sym__argument] = STATE(3),
    [sym_control_keyword] = STATE(3),
    [sym_type_keyword] = STATE(3),
    [sym_builtin_variable] = STATE(3),
    [sym_operator] = STATE(3),
    [aux_sym_macro_definition_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(59),
    [sym__newline] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(63),
    [sym_missing_value] = ACTIONS(59),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [5] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(6),
    [sym_local_macro_depth_1] = STATE(6),
    [sym_global_macro] = STATE(6),
    [sym__argument] = STATE(6),
    [sym_control_keyword] = STATE(6),
    [sym_type_keyword] = STATE(6),
    [sym_builtin_variable] = STATE(6),
    [sym_operator] = STATE(6),
    [aux_sym_macro_definition_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(53),
    [sym__newline] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(57),
    [sym_missing_value] = ACTIONS(53),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [6] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(6),
    [sym_local_macro_depth_1] = STATE(6),
    [sym_global_macro] = STATE(6),
    [sym__argument] = STATE(6),
    [sym_control_keyword] = STATE(6),
    [sym_type_keyword] = STATE(6),
    [sym_builtin_variable] = STATE(6),
    [sym_operator] = STATE(6),
    [aux_sym_macro_definition_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(67),
    [sym__newline] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(87),
    [anon_sym_end] = ACTIONS(90),
    [aux_sym__argument_token1] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(90),
    [anon_sym_else] = ACTIONS(90),
    [anon_sym_foreach] = ACTIONS(90),
    [anon_sym_forvalues] = ACTIONS(90),
    [anon_sym_forv] = ACTIONS(90),
    [anon_sym_while] = ACTIONS(90),
    [anon_sym_continue] = ACTIONS(90),
    [anon_sym_break] = ACTIONS(90),
    [anon_sym_byte] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_long] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_double] = ACTIONS(93),
    [aux_sym_type_keyword_token1] = ACTIONS(93),
    [aux_sym_type_keyword_token2] = ACTIONS(93),
    [aux_sym_type_keyword_token3] = ACTIONS(93),
    [aux_sym_type_keyword_token4] = ACTIONS(93),
    [aux_sym_type_keyword_token5] = ACTIONS(93),
    [aux_sym_type_keyword_token6] = ACTIONS(93),
    [anon_sym_strL] = ACTIONS(93),
    [sym_number] = ACTIONS(96),
    [sym_missing_value] = ACTIONS(67),
    [anon_sym__n] = ACTIONS(99),
    [anon_sym__N] = ACTIONS(99),
    [anon_sym__b] = ACTIONS(99),
    [anon_sym__coef] = ACTIONS(99),
    [anon_sym__cons] = ACTIONS(99),
    [anon_sym__rc] = ACTIONS(99),
    [anon_sym__se] = ACTIONS(99),
    [anon_sym__pi] = ACTIONS(99),
    [anon_sym__skip] = ACTIONS(99),
    [anon_sym__dup] = ACTIONS(99),
    [anon_sym__newline] = ACTIONS(99),
    [anon_sym__column] = ACTIONS(99),
    [anon_sym__continue] = ACTIONS(99),
    [anon_sym__request] = ACTIONS(99),
    [anon_sym__char] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym_EQ_EQ] = ACTIONS(72),
    [anon_sym_BANG_EQ] = ACTIONS(72),
    [anon_sym_TILDE_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(72),
    [anon_sym_GT_EQ] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(102),
    [anon_sym_TILDE] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
  },
  [7] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(6),
    [sym_local_macro_depth_1] = STATE(6),
    [sym_global_macro] = STATE(6),
    [sym__argument] = STATE(6),
    [sym_control_keyword] = STATE(6),
    [sym_type_keyword] = STATE(6),
    [sym_builtin_variable] = STATE(6),
    [sym_operator] = STATE(6),
    [aux_sym_macro_definition_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(53),
    [sym__newline] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(57),
    [sym_missing_value] = ACTIONS(53),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [8] = {
    [sym_double_string] = STATE(14),
    [sym_compound_string_depth_1] = STATE(14),
    [sym_string] = STATE(7),
    [sym_local_macro_depth_1] = STATE(7),
    [sym_global_macro] = STATE(7),
    [sym__argument] = STATE(7),
    [sym_control_keyword] = STATE(7),
    [sym_type_keyword] = STATE(7),
    [sym_builtin_variable] = STATE(7),
    [sym_operator] = STATE(7),
    [aux_sym_macro_definition_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(107),
    [sym__newline] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [aux_sym__argument_token1] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_forvalues] = ACTIONS(43),
    [anon_sym_forv] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [aux_sym_type_keyword_token1] = ACTIONS(45),
    [aux_sym_type_keyword_token2] = ACTIONS(45),
    [aux_sym_type_keyword_token3] = ACTIONS(45),
    [aux_sym_type_keyword_token4] = ACTIONS(45),
    [aux_sym_type_keyword_token5] = ACTIONS(45),
    [aux_sym_type_keyword_token6] = ACTIONS(45),
    [anon_sym_strL] = ACTIONS(45),
    [sym_number] = ACTIONS(111),
    [sym_missing_value] = ACTIONS(107),
    [anon_sym__n] = ACTIONS(49),
    [anon_sym__N] = ACTIONS(49),
    [anon_sym__b] = ACTIONS(49),
    [anon_sym__coef] = ACTIONS(49),
    [anon_sym__cons] = ACTIONS(49),
    [anon_sym__rc] = ACTIONS(49),
    [anon_sym__se] = ACTIONS(49),
    [anon_sym__pi] = ACTIONS(49),
    [anon_sym__skip] = ACTIONS(49),
    [anon_sym__dup] = ACTIONS(49),
    [anon_sym__newline] = ACTIONS(49),
    [anon_sym__column] = ACTIONS(49),
    [anon_sym__continue] = ACTIONS(49),
    [anon_sym__request] = ACTIONS(49),
    [anon_sym__char] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [9] = {
    [sym_identifier] = ACTIONS(113),
    [sym__newline] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_end] = ACTIONS(113),
    [aux_sym__argument_token1] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_else] = ACTIONS(113),
    [anon_sym_foreach] = ACTIONS(113),
    [anon_sym_forvalues] = ACTIONS(113),
    [anon_sym_forv] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_continue] = ACTIONS(113),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_byte] = ACTIONS(113),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_float] = ACTIONS(113),
    [anon_sym_double] = ACTIONS(113),
    [aux_sym_type_keyword_token1] = ACTIONS(113),
    [aux_sym_type_keyword_token2] = ACTIONS(113),
    [aux_sym_type_keyword_token3] = ACTIONS(113),
    [aux_sym_type_keyword_token4] = ACTIONS(113),
    [aux_sym_type_keyword_token5] = ACTIONS(113),
    [aux_sym_type_keyword_token6] = ACTIONS(113),
    [anon_sym_strL] = ACTIONS(113),
    [sym_number] = ACTIONS(115),
    [sym_missing_value] = ACTIONS(113),
    [anon_sym__n] = ACTIONS(113),
    [anon_sym__N] = ACTIONS(113),
    [anon_sym__b] = ACTIONS(113),
    [anon_sym__coef] = ACTIONS(113),
    [anon_sym__cons] = ACTIONS(113),
    [anon_sym__rc] = ACTIONS(113),
    [anon_sym__se] = ACTIONS(113),
    [anon_sym__pi] = ACTIONS(113),
    [anon_sym__skip] = ACTIONS(113),
    [anon_sym__dup] = ACTIONS(113),
    [anon_sym__newline] = ACTIONS(113),
    [anon_sym__column] = ACTIONS(113),
    [anon_sym__continue] = ACTIONS(113),
    [anon_sym__request] = ACTIONS(113),
    [anon_sym__char] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_TILDE_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
  },
  [10] = {
    [sym_identifier] = ACTIONS(117),
    [sym__newline] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_end] = ACTIONS(117),
    [aux_sym__argument_token1] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_foreach] = ACTIONS(117),
    [anon_sym_forvalues] = ACTIONS(117),
    [anon_sym_forv] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_continue] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_byte] = ACTIONS(117),
    [anon_sym_int] = ACTIONS(117),
    [anon_sym_long] = ACTIONS(117),
    [anon_sym_float] = ACTIONS(117),
    [anon_sym_double] = ACTIONS(117),
    [aux_sym_type_keyword_token1] = ACTIONS(117),
    [aux_sym_type_keyword_token2] = ACTIONS(117),
    [aux_sym_type_keyword_token3] = ACTIONS(117),
    [aux_sym_type_keyword_token4] = ACTIONS(117),
    [aux_sym_type_keyword_token5] = ACTIONS(117),
    [aux_sym_type_keyword_token6] = ACTIONS(117),
    [anon_sym_strL] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_missing_value] = ACTIONS(117),
    [anon_sym__n] = ACTIONS(117),
    [anon_sym__N] = ACTIONS(117),
    [anon_sym__b] = ACTIONS(117),
    [anon_sym__coef] = ACTIONS(117),
    [anon_sym__cons] = ACTIONS(117),
    [anon_sym__rc] = ACTIONS(117),
    [anon_sym__se] = ACTIONS(117),
    [anon_sym__pi] = ACTIONS(117),
    [anon_sym__skip] = ACTIONS(117),
    [anon_sym__dup] = ACTIONS(117),
    [anon_sym__newline] = ACTIONS(117),
    [anon_sym__column] = ACTIONS(117),
    [anon_sym__continue] = ACTIONS(117),
    [anon_sym__request] = ACTIONS(117),
    [anon_sym__char] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_TILDE_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
  },
  [11] = {
    [sym_identifier] = ACTIONS(121),
    [sym__newline] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_end] = ACTIONS(121),
    [aux_sym__argument_token1] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_else] = ACTIONS(121),
    [anon_sym_foreach] = ACTIONS(121),
    [anon_sym_forvalues] = ACTIONS(121),
    [anon_sym_forv] = ACTIONS(121),
    [anon_sym_while] = ACTIONS(121),
    [anon_sym_continue] = ACTIONS(121),
    [anon_sym_break] = ACTIONS(121),
    [anon_sym_byte] = ACTIONS(121),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_float] = ACTIONS(121),
    [anon_sym_double] = ACTIONS(121),
    [aux_sym_type_keyword_token1] = ACTIONS(121),
    [aux_sym_type_keyword_token2] = ACTIONS(121),
    [aux_sym_type_keyword_token3] = ACTIONS(121),
    [aux_sym_type_keyword_token4] = ACTIONS(121),
    [aux_sym_type_keyword_token5] = ACTIONS(121),
    [aux_sym_type_keyword_token6] = ACTIONS(121),
    [anon_sym_strL] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_missing_value] = ACTIONS(121),
    [anon_sym__n] = ACTIONS(121),
    [anon_sym__N] = ACTIONS(121),
    [anon_sym__b] = ACTIONS(121),
    [anon_sym__coef] = ACTIONS(121),
    [anon_sym__cons] = ACTIONS(121),
    [anon_sym__rc] = ACTIONS(121),
    [anon_sym__se] = ACTIONS(121),
    [anon_sym__pi] = ACTIONS(121),
    [anon_sym__skip] = ACTIONS(121),
    [anon_sym__dup] = ACTIONS(121),
    [anon_sym__newline] = ACTIONS(121),
    [anon_sym__column] = ACTIONS(121),
    [anon_sym__continue] = ACTIONS(121),
    [anon_sym__request] = ACTIONS(121),
    [anon_sym__char] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_TILDE_EQ] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
  },
  [12] = {
    [sym_identifier] = ACTIONS(125),
    [sym__newline] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(127),
    [anon_sym_end] = ACTIONS(125),
    [aux_sym__argument_token1] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_else] = ACTIONS(125),
    [anon_sym_foreach] = ACTIONS(125),
    [anon_sym_forvalues] = ACTIONS(125),
    [anon_sym_forv] = ACTIONS(125),
    [anon_sym_while] = ACTIONS(125),
    [anon_sym_continue] = ACTIONS(125),
    [anon_sym_break] = ACTIONS(125),
    [anon_sym_byte] = ACTIONS(125),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_double] = ACTIONS(125),
    [aux_sym_type_keyword_token1] = ACTIONS(125),
    [aux_sym_type_keyword_token2] = ACTIONS(125),
    [aux_sym_type_keyword_token3] = ACTIONS(125),
    [aux_sym_type_keyword_token4] = ACTIONS(125),
    [aux_sym_type_keyword_token5] = ACTIONS(125),
    [aux_sym_type_keyword_token6] = ACTIONS(125),
    [anon_sym_strL] = ACTIONS(125),
    [sym_number] = ACTIONS(127),
    [sym_missing_value] = ACTIONS(125),
    [anon_sym__n] = ACTIONS(125),
    [anon_sym__N] = ACTIONS(125),
    [anon_sym__b] = ACTIONS(125),
    [anon_sym__coef] = ACTIONS(125),
    [anon_sym__cons] = ACTIONS(125),
    [anon_sym__rc] = ACTIONS(125),
    [anon_sym__se] = ACTIONS(125),
    [anon_sym__pi] = ACTIONS(125),
    [anon_sym__skip] = ACTIONS(125),
    [anon_sym__dup] = ACTIONS(125),
    [anon_sym__newline] = ACTIONS(125),
    [anon_sym__column] = ACTIONS(125),
    [anon_sym__continue] = ACTIONS(125),
    [anon_sym__request] = ACTIONS(125),
    [anon_sym__char] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_TILDE_EQ] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
  },
  [13] = {
    [sym_identifier] = ACTIONS(129),
    [sym__newline] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(129),
    [aux_sym__argument_token1] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_foreach] = ACTIONS(129),
    [anon_sym_forvalues] = ACTIONS(129),
    [anon_sym_forv] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_byte] = ACTIONS(129),
    [anon_sym_int] = ACTIONS(129),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_float] = ACTIONS(129),
    [anon_sym_double] = ACTIONS(129),
    [aux_sym_type_keyword_token1] = ACTIONS(129),
    [aux_sym_type_keyword_token2] = ACTIONS(129),
    [aux_sym_type_keyword_token3] = ACTIONS(129),
    [aux_sym_type_keyword_token4] = ACTIONS(129),
    [aux_sym_type_keyword_token5] = ACTIONS(129),
    [aux_sym_type_keyword_token6] = ACTIONS(129),
    [anon_sym_strL] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_missing_value] = ACTIONS(129),
    [anon_sym__n] = ACTIONS(129),
    [anon_sym__N] = ACTIONS(129),
    [anon_sym__b] = ACTIONS(129),
    [anon_sym__coef] = ACTIONS(129),
    [anon_sym__cons] = ACTIONS(129),
    [anon_sym__rc] = ACTIONS(129),
    [anon_sym__se] = ACTIONS(129),
    [anon_sym__pi] = ACTIONS(129),
    [anon_sym__skip] = ACTIONS(129),
    [anon_sym__dup] = ACTIONS(129),
    [anon_sym__newline] = ACTIONS(129),
    [anon_sym__column] = ACTIONS(129),
    [anon_sym__continue] = ACTIONS(129),
    [anon_sym__request] = ACTIONS(129),
    [anon_sym__char] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_TILDE_EQ] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [14] = {
    [sym_identifier] = ACTIONS(133),
    [sym__newline] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(133),
    [aux_sym__argument_token1] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_foreach] = ACTIONS(133),
    [anon_sym_forvalues] = ACTIONS(133),
    [anon_sym_forv] = ACTIONS(133),
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_continue] = ACTIONS(133),
    [anon_sym_break] = ACTIONS(133),
    [anon_sym_byte] = ACTIONS(133),
    [anon_sym_int] = ACTIONS(133),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_float] = ACTIONS(133),
    [anon_sym_double] = ACTIONS(133),
    [aux_sym_type_keyword_token1] = ACTIONS(133),
    [aux_sym_type_keyword_token2] = ACTIONS(133),
    [aux_sym_type_keyword_token3] = ACTIONS(133),
    [aux_sym_type_keyword_token4] = ACTIONS(133),
    [aux_sym_type_keyword_token5] = ACTIONS(133),
    [aux_sym_type_keyword_token6] = ACTIONS(133),
    [anon_sym_strL] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_missing_value] = ACTIONS(133),
    [anon_sym__n] = ACTIONS(133),
    [anon_sym__N] = ACTIONS(133),
    [anon_sym__b] = ACTIONS(133),
    [anon_sym__coef] = ACTIONS(133),
    [anon_sym__cons] = ACTIONS(133),
    [anon_sym__rc] = ACTIONS(133),
    [anon_sym__se] = ACTIONS(133),
    [anon_sym__pi] = ACTIONS(133),
    [anon_sym__skip] = ACTIONS(133),
    [anon_sym__dup] = ACTIONS(133),
    [anon_sym__newline] = ACTIONS(133),
    [anon_sym__column] = ACTIONS(133),
    [anon_sym__continue] = ACTIONS(133),
    [anon_sym__request] = ACTIONS(133),
    [anon_sym__char] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_TILDE_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
  },
  [15] = {
    [sym_identifier] = ACTIONS(137),
    [sym__newline] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_end] = ACTIONS(137),
    [aux_sym__argument_token1] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(137),
    [anon_sym_foreach] = ACTIONS(137),
    [anon_sym_forvalues] = ACTIONS(137),
    [anon_sym_forv] = ACTIONS(137),
    [anon_sym_while] = ACTIONS(137),
    [anon_sym_continue] = ACTIONS(137),
    [anon_sym_break] = ACTIONS(137),
    [anon_sym_byte] = ACTIONS(137),
    [anon_sym_int] = ACTIONS(137),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_float] = ACTIONS(137),
    [anon_sym_double] = ACTIONS(137),
    [aux_sym_type_keyword_token1] = ACTIONS(137),
    [aux_sym_type_keyword_token2] = ACTIONS(137),
    [aux_sym_type_keyword_token3] = ACTIONS(137),
    [aux_sym_type_keyword_token4] = ACTIONS(137),
    [aux_sym_type_keyword_token5] = ACTIONS(137),
    [aux_sym_type_keyword_token6] = ACTIONS(137),
    [anon_sym_strL] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_missing_value] = ACTIONS(137),
    [anon_sym__n] = ACTIONS(137),
    [anon_sym__N] = ACTIONS(137),
    [anon_sym__b] = ACTIONS(137),
    [anon_sym__coef] = ACTIONS(137),
    [anon_sym__cons] = ACTIONS(137),
    [anon_sym__rc] = ACTIONS(137),
    [anon_sym__se] = ACTIONS(137),
    [anon_sym__pi] = ACTIONS(137),
    [anon_sym__skip] = ACTIONS(137),
    [anon_sym__dup] = ACTIONS(137),
    [anon_sym__newline] = ACTIONS(137),
    [anon_sym__column] = ACTIONS(137),
    [anon_sym__continue] = ACTIONS(137),
    [anon_sym__request] = ACTIONS(137),
    [anon_sym__char] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_TILDE_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
  },
  [16] = {
    [sym_identifier] = ACTIONS(141),
    [sym__newline] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(141),
    [aux_sym__argument_token1] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_else] = ACTIONS(141),
    [anon_sym_foreach] = ACTIONS(141),
    [anon_sym_forvalues] = ACTIONS(141),
    [anon_sym_forv] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(141),
    [anon_sym_continue] = ACTIONS(141),
    [anon_sym_break] = ACTIONS(141),
    [anon_sym_byte] = ACTIONS(141),
    [anon_sym_int] = ACTIONS(141),
    [anon_sym_long] = ACTIONS(141),
    [anon_sym_float] = ACTIONS(141),
    [anon_sym_double] = ACTIONS(141),
    [aux_sym_type_keyword_token1] = ACTIONS(141),
    [aux_sym_type_keyword_token2] = ACTIONS(141),
    [aux_sym_type_keyword_token3] = ACTIONS(141),
    [aux_sym_type_keyword_token4] = ACTIONS(141),
    [aux_sym_type_keyword_token5] = ACTIONS(141),
    [aux_sym_type_keyword_token6] = ACTIONS(141),
    [anon_sym_strL] = ACTIONS(141),
    [sym_number] = ACTIONS(143),
    [sym_missing_value] = ACTIONS(141),
    [anon_sym__n] = ACTIONS(141),
    [anon_sym__N] = ACTIONS(141),
    [anon_sym__b] = ACTIONS(141),
    [anon_sym__coef] = ACTIONS(141),
    [anon_sym__cons] = ACTIONS(141),
    [anon_sym__rc] = ACTIONS(141),
    [anon_sym__se] = ACTIONS(141),
    [anon_sym__pi] = ACTIONS(141),
    [anon_sym__skip] = ACTIONS(141),
    [anon_sym__dup] = ACTIONS(141),
    [anon_sym__newline] = ACTIONS(141),
    [anon_sym__column] = ACTIONS(141),
    [anon_sym__continue] = ACTIONS(141),
    [anon_sym__request] = ACTIONS(141),
    [anon_sym__char] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_TILDE_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [17] = {
    [sym_identifier] = ACTIONS(145),
    [sym__newline] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(145),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(145),
    [aux_sym__argument_token1] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_else] = ACTIONS(145),
    [anon_sym_foreach] = ACTIONS(145),
    [anon_sym_forvalues] = ACTIONS(145),
    [anon_sym_forv] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_continue] = ACTIONS(145),
    [anon_sym_break] = ACTIONS(145),
    [anon_sym_byte] = ACTIONS(145),
    [anon_sym_int] = ACTIONS(145),
    [anon_sym_long] = ACTIONS(145),
    [anon_sym_float] = ACTIONS(145),
    [anon_sym_double] = ACTIONS(145),
    [aux_sym_type_keyword_token1] = ACTIONS(145),
    [aux_sym_type_keyword_token2] = ACTIONS(145),
    [aux_sym_type_keyword_token3] = ACTIONS(145),
    [aux_sym_type_keyword_token4] = ACTIONS(145),
    [aux_sym_type_keyword_token5] = ACTIONS(145),
    [aux_sym_type_keyword_token6] = ACTIONS(145),
    [anon_sym_strL] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [sym_missing_value] = ACTIONS(145),
    [anon_sym__n] = ACTIONS(145),
    [anon_sym__N] = ACTIONS(145),
    [anon_sym__b] = ACTIONS(145),
    [anon_sym__coef] = ACTIONS(145),
    [anon_sym__cons] = ACTIONS(145),
    [anon_sym__rc] = ACTIONS(145),
    [anon_sym__se] = ACTIONS(145),
    [anon_sym__pi] = ACTIONS(145),
    [anon_sym__skip] = ACTIONS(145),
    [anon_sym__dup] = ACTIONS(145),
    [anon_sym__newline] = ACTIONS(145),
    [anon_sym__column] = ACTIONS(145),
    [anon_sym__continue] = ACTIONS(145),
    [anon_sym__request] = ACTIONS(145),
    [anon_sym__char] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_TILDE_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
  },
  [18] = {
    [sym_identifier] = ACTIONS(149),
    [sym__newline] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_end] = ACTIONS(149),
    [aux_sym__argument_token1] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(149),
    [anon_sym_foreach] = ACTIONS(149),
    [anon_sym_forvalues] = ACTIONS(149),
    [anon_sym_forv] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(149),
    [anon_sym_continue] = ACTIONS(149),
    [anon_sym_break] = ACTIONS(149),
    [anon_sym_byte] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_long] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [aux_sym_type_keyword_token1] = ACTIONS(149),
    [aux_sym_type_keyword_token2] = ACTIONS(149),
    [aux_sym_type_keyword_token3] = ACTIONS(149),
    [aux_sym_type_keyword_token4] = ACTIONS(149),
    [aux_sym_type_keyword_token5] = ACTIONS(149),
    [aux_sym_type_keyword_token6] = ACTIONS(149),
    [anon_sym_strL] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [sym_missing_value] = ACTIONS(149),
    [anon_sym__n] = ACTIONS(149),
    [anon_sym__N] = ACTIONS(149),
    [anon_sym__b] = ACTIONS(149),
    [anon_sym__coef] = ACTIONS(149),
    [anon_sym__cons] = ACTIONS(149),
    [anon_sym__rc] = ACTIONS(149),
    [anon_sym__se] = ACTIONS(149),
    [anon_sym__pi] = ACTIONS(149),
    [anon_sym__skip] = ACTIONS(149),
    [anon_sym__dup] = ACTIONS(149),
    [anon_sym__newline] = ACTIONS(149),
    [anon_sym__column] = ACTIONS(149),
    [anon_sym__continue] = ACTIONS(149),
    [anon_sym__request] = ACTIONS(149),
    [anon_sym__char] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_CARET] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_TILDE_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
  },
  [19] = {
    [sym_identifier] = ACTIONS(153),
    [sym__newline] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(155),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(153),
    [aux_sym__argument_token1] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_else] = ACTIONS(153),
    [anon_sym_foreach] = ACTIONS(153),
    [anon_sym_forvalues] = ACTIONS(153),
    [anon_sym_forv] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_continue] = ACTIONS(153),
    [anon_sym_break] = ACTIONS(153),
    [anon_sym_byte] = ACTIONS(153),
    [anon_sym_int] = ACTIONS(153),
    [anon_sym_long] = ACTIONS(153),
    [anon_sym_float] = ACTIONS(153),
    [anon_sym_double] = ACTIONS(153),
    [aux_sym_type_keyword_token1] = ACTIONS(153),
    [aux_sym_type_keyword_token2] = ACTIONS(153),
    [aux_sym_type_keyword_token3] = ACTIONS(153),
    [aux_sym_type_keyword_token4] = ACTIONS(153),
    [aux_sym_type_keyword_token5] = ACTIONS(153),
    [aux_sym_type_keyword_token6] = ACTIONS(153),
    [anon_sym_strL] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [sym_missing_value] = ACTIONS(153),
    [anon_sym__n] = ACTIONS(153),
    [anon_sym__N] = ACTIONS(153),
    [anon_sym__b] = ACTIONS(153),
    [anon_sym__coef] = ACTIONS(153),
    [anon_sym__cons] = ACTIONS(153),
    [anon_sym__rc] = ACTIONS(153),
    [anon_sym__se] = ACTIONS(153),
    [anon_sym__pi] = ACTIONS(153),
    [anon_sym__skip] = ACTIONS(153),
    [anon_sym__dup] = ACTIONS(153),
    [anon_sym__newline] = ACTIONS(153),
    [anon_sym__column] = ACTIONS(153),
    [anon_sym__continue] = ACTIONS(153),
    [anon_sym__request] = ACTIONS(153),
    [anon_sym__char] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_TILDE_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
  },
  [20] = {
    [sym_identifier] = ACTIONS(157),
    [sym__newline] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_BQUOTE_DQUOTE] = ACTIONS(159),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(157),
    [aux_sym__argument_token1] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_foreach] = ACTIONS(157),
    [anon_sym_forvalues] = ACTIONS(157),
    [anon_sym_forv] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_continue] = ACTIONS(157),
    [anon_sym_break] = ACTIONS(157),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(157),
    [anon_sym_long] = ACTIONS(157),
    [anon_sym_float] = ACTIONS(157),
    [anon_sym_double] = ACTIONS(157),
    [aux_sym_type_keyword_token1] = ACTIONS(157),
    [aux_sym_type_keyword_token2] = ACTIONS(157),
    [aux_sym_type_keyword_token3] = ACTIONS(157),
    [aux_sym_type_keyword_token4] = ACTIONS(157),
    [aux_sym_type_keyword_token5] = ACTIONS(157),
    [aux_sym_type_keyword_token6] = ACTIONS(157),
    [anon_sym_strL] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [sym_missing_value] = ACTIONS(157),
    [anon_sym__n] = ACTIONS(157),
    [anon_sym__N] = ACTIONS(157),
    [anon_sym__b] = ACTIONS(157),
    [anon_sym__coef] = ACTIONS(157),
    [anon_sym__cons] = ACTIONS(157),
    [anon_sym__rc] = ACTIONS(157),
    [anon_sym__se] = ACTIONS(157),
    [anon_sym__pi] = ACTIONS(157),
    [anon_sym__skip] = ACTIONS(157),
    [anon_sym__dup] = ACTIONS(157),
    [anon_sym__newline] = ACTIONS(157),
    [anon_sym__column] = ACTIONS(157),
    [anon_sym__continue] = ACTIONS(157),
    [anon_sym__request] = ACTIONS(157),
    [anon_sym__char] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_TILDE_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_line_comment_token1,
    ACTIONS(11), 1,
      aux_sym_line_comment_token2,
    ACTIONS(13), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_program,
    ACTIONS(17), 1,
      anon_sym_mata,
    ACTIONS(25), 1,
      sym__line_start,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(23), 2,
      sym__program_line,
      aux_sym_program_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(19), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(144), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(23), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [69] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_line_comment_token1,
    ACTIONS(11), 1,
      aux_sym_line_comment_token2,
    ACTIONS(13), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_program,
    ACTIONS(17), 1,
      anon_sym_mata,
    ACTIONS(25), 1,
      sym__line_start,
    ACTIONS(165), 1,
      sym__newline,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(25), 2,
      sym__program_line,
      aux_sym_program_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(19), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(144), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(23), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [138] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_line_comment_token1,
    ACTIONS(11), 1,
      aux_sym_line_comment_token2,
    ACTIONS(13), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_program,
    ACTIONS(17), 1,
      anon_sym_mata,
    ACTIONS(25), 1,
      sym__line_start,
    ACTIONS(169), 1,
      sym__newline,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(24), 2,
      sym__program_line,
      aux_sym_program_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(19), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(144), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(23), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [207] = 16,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym__newline,
    ACTIONS(179), 1,
      aux_sym_line_comment_token1,
    ACTIONS(182), 1,
      aux_sym_line_comment_token2,
    ACTIONS(185), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      anon_sym_program,
    ACTIONS(191), 1,
      anon_sym_end,
    ACTIONS(193), 1,
      anon_sym_mata,
    ACTIONS(205), 1,
      sym__line_start,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(24), 2,
      sym__program_line,
      aux_sym_program_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(196), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(144), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(202), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [276] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_line_comment_token1,
    ACTIONS(11), 1,
      aux_sym_line_comment_token2,
    ACTIONS(13), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_program,
    ACTIONS(17), 1,
      anon_sym_mata,
    ACTIONS(25), 1,
      sym__line_start,
    ACTIONS(169), 1,
      sym__newline,
    ACTIONS(208), 1,
      anon_sym_end,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(24), 2,
      sym__program_line,
      aux_sym_program_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(19), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(144), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(23), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [345] = 16,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_line_comment_token1,
    ACTIONS(11), 1,
      aux_sym_line_comment_token2,
    ACTIONS(13), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_program,
    ACTIONS(17), 1,
      anon_sym_mata,
    ACTIONS(25), 1,
      sym__line_start,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym__newline,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(27), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    ACTIONS(21), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(19), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(141), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(23), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [414] = 16,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(219), 1,
      sym__newline,
    ACTIONS(222), 1,
      aux_sym_line_comment_token1,
    ACTIONS(225), 1,
      aux_sym_line_comment_token2,
    ACTIONS(228), 1,
      sym_block_comment,
    ACTIONS(231), 1,
      anon_sym_program,
    ACTIONS(234), 1,
      anon_sym_mata,
    ACTIONS(246), 1,
      sym__line_start,
    STATE(118), 1,
      sym_prefix,
    STATE(133), 1,
      sym_line_comment,
    STATE(27), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    ACTIONS(240), 3,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
    ACTIONS(237), 4,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
    STATE(141), 6,
      sym__statement,
      sym_comment,
      sym_program_definition,
      sym_mata_block,
      sym_macro_definition,
      sym_command,
    ACTIONS(243), 10,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
  [483] = 2,
    ACTIONS(249), 5,
      sym__line_start,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_line_comment_token1,
      sym_block_comment,
    ACTIONS(251), 21,
      aux_sym_line_comment_token2,
      anon_sym_program,
      anon_sym_mata,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
      sym_identifier,
  [514] = 2,
    ACTIONS(255), 4,
      sym__line_start,
      sym__newline,
      aux_sym_line_comment_token1,
      sym_block_comment,
    ACTIONS(253), 22,
      aux_sym_line_comment_token2,
      anon_sym_program,
      anon_sym_end,
      anon_sym_mata,
      anon_sym_local,
      anon_sym_loc,
      anon_sym_global,
      anon_sym_gl,
      anon_sym_tempvar,
      anon_sym_tempname,
      anon_sym_tempfile,
      anon_sym_by,
      anon_sym_bysort,
      anon_sym_bys,
      anon_sym_quietly,
      anon_sym_qui,
      anon_sym_noisily,
      anon_sym_noi,
      anon_sym_capture,
      anon_sym_cap,
      anon_sym_sortpreserve,
      sym_identifier,
  [545] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(263), 1,
      sym__compound_text,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(33), 6,
      sym_double_string,
      sym__compound_content_3,
      sym_compound_string_depth_4,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_3_repeat1,
  [575] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(275), 1,
      sym__compound_text,
    STATE(37), 6,
      sym_double_string,
      sym_compound_string_depth_1,
      sym__compound_content_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_6_repeat1,
  [605] = 8,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(285), 1,
      sym__compound_text,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(32), 6,
      sym_double_string,
      sym__compound_content_3,
      sym_compound_string_depth_4,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_3_repeat1,
  [635] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(299), 1,
      sym__compound_text,
    STATE(32), 6,
      sym_double_string,
      sym__compound_content_3,
      sym_compound_string_depth_4,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_3_repeat1,
  [665] = 8,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(309), 1,
      sym__compound_text,
    ACTIONS(312), 1,
      anon_sym_BQUOTE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(318), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(34), 6,
      sym_double_string,
      sym__compound_content_2,
      sym_compound_string_depth_3,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_2_repeat1,
  [695] = 8,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(329), 1,
      sym__compound_text,
    ACTIONS(332), 1,
      anon_sym_BQUOTE,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(35), 6,
      sym_double_string,
      sym__compound_content_5,
      sym_compound_string_depth_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_5_repeat1,
  [725] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(341), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(345), 1,
      sym__compound_text,
    STATE(48), 6,
      sym_double_string,
      sym__compound_content_4,
      sym_compound_string_depth_5,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_4_repeat1,
  [755] = 8,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(355), 1,
      sym__compound_text,
    ACTIONS(358), 1,
      anon_sym_BQUOTE,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(37), 6,
      sym_double_string,
      sym_compound_string_depth_1,
      sym__compound_content_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_6_repeat1,
  [785] = 8,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(375), 1,
      sym__compound_text,
    ACTIONS(378), 1,
      anon_sym_BQUOTE,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(38), 6,
      sym_double_string,
      sym__compound_content_1,
      sym_compound_string_depth_2,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_1_repeat1,
  [815] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(391), 1,
      sym__compound_text,
    STATE(45), 6,
      sym_double_string,
      sym__compound_content_1,
      sym_compound_string_depth_2,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_1_repeat1,
  [845] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(395), 1,
      sym__compound_text,
    STATE(31), 6,
      sym_double_string,
      sym_compound_string_depth_1,
      sym__compound_content_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_6_repeat1,
  [875] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(399), 1,
      sym__compound_text,
    STATE(47), 6,
      sym_double_string,
      sym__compound_content_1,
      sym_compound_string_depth_2,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_1_repeat1,
  [905] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(401), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(403), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(405), 1,
      sym__compound_text,
    STATE(46), 6,
      sym_double_string,
      sym__compound_content_2,
      sym_compound_string_depth_3,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_2_repeat1,
  [935] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(407), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(409), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(411), 1,
      sym__compound_text,
    STATE(35), 6,
      sym_double_string,
      sym__compound_content_5,
      sym_compound_string_depth_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_5_repeat1,
  [965] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(407), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(415), 1,
      sym__compound_text,
    STATE(43), 6,
      sym_double_string,
      sym__compound_content_5,
      sym_compound_string_depth_6,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_5_repeat1,
  [995] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(417), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(419), 1,
      sym__compound_text,
    STATE(38), 6,
      sym_double_string,
      sym__compound_content_1,
      sym_compound_string_depth_2,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_1_repeat1,
  [1025] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(401), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(423), 1,
      sym__compound_text,
    STATE(34), 6,
      sym_double_string,
      sym__compound_content_2,
      sym_compound_string_depth_3,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_2_repeat1,
  [1055] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(419), 1,
      sym__compound_text,
    ACTIONS(425), 1,
      anon_sym_DQUOTE_SQUOTE,
    STATE(38), 6,
      sym_double_string,
      sym__compound_content_1,
      sym_compound_string_depth_2,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_1_repeat1,
  [1085] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(341), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(429), 1,
      sym__compound_text,
    STATE(49), 6,
      sym_double_string,
      sym__compound_content_4,
      sym_compound_string_depth_5,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_4_repeat1,
  [1115] = 8,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      anon_sym_BQUOTE_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_DQUOTE_SQUOTE,
    ACTIONS(439), 1,
      sym__compound_text,
    ACTIONS(442), 1,
      anon_sym_BQUOTE,
    ACTIONS(445), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 6,
      sym_double_string,
      sym__compound_content_4,
      sym_compound_string_depth_5,
      sym_local_macro_depth_1,
      sym_global_macro,
      aux_sym_compound_string_depth_4_repeat1,
  [1145] = 6,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      aux_sym_double_string_token1,
    ACTIONS(459), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(456), 2,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
    STATE(50), 2,
      sym_global_macro,
      aux_sym_double_string_repeat1,
  [1166] = 5,
    ACTIONS(467), 1,
      anon_sym_BQUOTE,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(117), 3,
      sym_local_macro_depth_3,
      sym__macro_name,
      sym_global_macro,
  [1185] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(473), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(140), 3,
      sym_local_macro_depth_2,
      sym__macro_name,
      sym_global_macro,
  [1204] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(477), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(137), 3,
      sym_local_macro_depth_2,
      sym__macro_name,
      sym_global_macro,
  [1223] = 6,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_double_string_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(483), 2,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
    STATE(50), 2,
      sym_global_macro,
      aux_sym_double_string_repeat1,
  [1244] = 6,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_double_string_token1,
    ACTIONS(493), 2,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
    STATE(54), 2,
      sym_global_macro,
      aux_sym_double_string_repeat1,
  [1265] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(495), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(115), 3,
      sym_local_macro_depth_1,
      sym__macro_name,
      sym_global_macro,
  [1284] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(501), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(109), 3,
      sym_local_macro_depth_6,
      sym__macro_name,
      sym_global_macro,
  [1303] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(475), 1,
      anon_sym_BQUOTE,
    ACTIONS(503), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(104), 3,
      sym_local_macro_depth_2,
      sym__macro_name,
      sym_global_macro,
  [1322] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(507), 1,
      anon_sym_BQUOTE,
    ACTIONS(505), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(124), 3,
      sym_local_macro_depth_5,
      sym__macro_name,
      sym_global_macro,
  [1341] = 6,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    ACTIONS(511), 1,
      aux_sym_double_string_token1,
    ACTIONS(513), 2,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
    STATE(62), 2,
      sym_global_macro,
      aux_sym_double_string_repeat1,
  [1362] = 5,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(517), 1,
      anon_sym_BQUOTE,
    ACTIONS(515), 2,
      aux_sym__macro_name_token1,
      sym_identifier,
    STATE(107), 3,
      sym_local_macro_depth_4,
      sym__macro_name,
      sym_global_macro,
  [1381] = 6,
    ACTIONS(481), 1,
      aux_sym_double_string_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 2,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
    STATE(50), 2,
      sym_global_macro,
      aux_sym_double_string_repeat1,
  [1402] = 1,
    ACTIONS(117), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1412] = 1,
    ACTIONS(521), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1422] = 1,
    ACTIONS(523), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1432] = 1,
    ACTIONS(525), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1442] = 1,
    ACTIONS(527), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1452] = 1,
    ACTIONS(153), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1462] = 1,
    ACTIONS(121), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1472] = 1,
    ACTIONS(529), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1482] = 1,
    ACTIONS(157), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1492] = 1,
    ACTIONS(149), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1502] = 1,
    ACTIONS(531), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1512] = 1,
    ACTIONS(533), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1522] = 1,
    ACTIONS(535), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1532] = 1,
    ACTIONS(537), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1542] = 1,
    ACTIONS(539), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1552] = 1,
    ACTIONS(125), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1562] = 1,
    ACTIONS(129), 7,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_DQUOTE,
      anon_sym_DQUOTE_SQUOTE,
      sym__compound_text,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1572] = 2,
    ACTIONS(123), 1,
      aux_sym_double_string_token1,
    ACTIONS(121), 5,
      anon_sym_DQUOTE,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1583] = 2,
    ACTIONS(155), 1,
      aux_sym_double_string_token1,
    ACTIONS(153), 5,
      anon_sym_DQUOTE,
      aux_sym_double_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
  [1594] = 4,
    ACTIONS(541), 1,
      sym__newline,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 1,
      sym__mata_inline_content,
  [1607] = 3,
    ACTIONS(549), 1,
      anon_sym_end,
    ACTIONS(551), 1,
      aux_sym__mata_line_token1,
    STATE(84), 2,
      sym__mata_line,
      aux_sym_mata_block_repeat2,
  [1618] = 3,
    ACTIONS(553), 1,
      anon_sym_end,
    ACTIONS(555), 1,
      aux_sym__mata_line_token1,
    STATE(84), 2,
      sym__mata_line,
      aux_sym_mata_block_repeat2,
  [1629] = 3,
    ACTIONS(551), 1,
      aux_sym__mata_line_token1,
    ACTIONS(558), 1,
      anon_sym_end,
    STATE(84), 2,
      sym__mata_line,
      aux_sym_mata_block_repeat2,
  [1640] = 3,
    ACTIONS(551), 1,
      aux_sym__mata_line_token1,
    ACTIONS(560), 1,
      anon_sym_end,
    STATE(85), 2,
      sym__mata_line,
      aux_sym_mata_block_repeat2,
  [1651] = 3,
    ACTIONS(551), 1,
      aux_sym__mata_line_token1,
    ACTIONS(558), 1,
      anon_sym_end,
    STATE(83), 2,
      sym__mata_line,
      aux_sym_mata_block_repeat2,
  [1662] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      sym__mata_brace_content,
    STATE(88), 1,
      aux_sym_mata_block_repeat1,
  [1672] = 3,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym_macro_definition_repeat2,
  [1682] = 3,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      sym__mata_brace_content,
    STATE(88), 1,
      aux_sym_mata_block_repeat1,
  [1692] = 3,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      sym__mata_brace_content,
    STATE(94), 1,
      aux_sym_mata_block_repeat1,
  [1702] = 3,
    ACTIONS(560), 1,
      sym__mata_inline_content,
    ACTIONS(575), 1,
      sym__newline,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
  [1712] = 3,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym_macro_definition_repeat2,
  [1722] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      sym__mata_brace_content,
    STATE(88), 1,
      aux_sym_mata_block_repeat1,
  [1732] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      sym__mata_brace_content,
    STATE(90), 1,
      aux_sym_mata_block_repeat1,
  [1742] = 2,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_macro_definition_repeat2,
  [1749] = 2,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_define,
  [1756] = 1,
    ACTIONS(590), 2,
      anon_sym_end,
      aux_sym__mata_line_token1,
  [1761] = 1,
    ACTIONS(592), 2,
      sym__newline,
      sym_identifier,
  [1766] = 1,
    ACTIONS(594), 1,
      sym__newline,
  [1770] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [1774] = 1,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
  [1778] = 1,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
  [1782] = 1,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
  [1786] = 1,
    ACTIONS(604), 1,
      sym_identifier,
  [1790] = 1,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
  [1794] = 1,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
  [1798] = 1,
    ACTIONS(610), 1,
      sym_identifier,
  [1802] = 1,
    ACTIONS(612), 1,
      anon_sym_SQUOTE,
  [1806] = 1,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
  [1810] = 1,
    ACTIONS(616), 1,
      sym__newline,
  [1814] = 1,
    ACTIONS(618), 1,
      sym_identifier,
  [1818] = 1,
    ACTIONS(620), 1,
      sym__newline,
  [1822] = 1,
    ACTIONS(622), 1,
      sym__newline,
  [1826] = 1,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
  [1830] = 1,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
  [1834] = 1,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
  [1838] = 1,
    ACTIONS(630), 1,
      sym_identifier,
  [1842] = 1,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
  [1846] = 1,
    ACTIONS(634), 1,
      sym__newline,
  [1850] = 1,
    ACTIONS(636), 1,
      sym_identifier,
  [1854] = 1,
    ACTIONS(638), 1,
      anon_sym_STAR,
  [1858] = 1,
    ACTIONS(640), 1,
      aux_sym_line_comment_token3,
  [1862] = 1,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
  [1866] = 1,
    ACTIONS(644), 1,
      sym__newline,
  [1870] = 1,
    ACTIONS(646), 1,
      sym_identifier,
  [1874] = 1,
    ACTIONS(648), 1,
      sym__newline,
  [1878] = 1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
  [1882] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [1886] = 1,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
  [1890] = 1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
  [1894] = 1,
    ACTIONS(652), 1,
      sym__newline,
  [1898] = 1,
    ACTIONS(654), 1,
      sym__newline,
  [1902] = 1,
    ACTIONS(656), 1,
      sym_identifier,
  [1906] = 1,
    ACTIONS(658), 1,
      sym__newline,
  [1910] = 1,
    ACTIONS(660), 1,
      sym__newline,
  [1914] = 1,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
  [1918] = 1,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [1922] = 1,
    ACTIONS(666), 1,
      sym_identifier,
  [1926] = 1,
    ACTIONS(668), 1,
      anon_sym_SQUOTE,
  [1930] = 1,
    ACTIONS(670), 1,
      sym__newline,
  [1934] = 1,
    ACTIONS(672), 1,
      sym_identifier,
  [1938] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [1942] = 1,
    ACTIONS(676), 1,
      sym__newline,
  [1946] = 1,
    ACTIONS(678), 1,
      sym_identifier,
  [1950] = 1,
    ACTIONS(680), 1,
      sym__newline,
  [1954] = 1,
    ACTIONS(682), 1,
      sym_identifier,
  [1958] = 1,
    ACTIONS(684), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 69,
  [SMALL_STATE(23)] = 138,
  [SMALL_STATE(24)] = 207,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 345,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 514,
  [SMALL_STATE(30)] = 545,
  [SMALL_STATE(31)] = 575,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 635,
  [SMALL_STATE(34)] = 665,
  [SMALL_STATE(35)] = 695,
  [SMALL_STATE(36)] = 725,
  [SMALL_STATE(37)] = 755,
  [SMALL_STATE(38)] = 785,
  [SMALL_STATE(39)] = 815,
  [SMALL_STATE(40)] = 845,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 935,
  [SMALL_STATE(44)] = 965,
  [SMALL_STATE(45)] = 995,
  [SMALL_STATE(46)] = 1025,
  [SMALL_STATE(47)] = 1055,
  [SMALL_STATE(48)] = 1085,
  [SMALL_STATE(49)] = 1115,
  [SMALL_STATE(50)] = 1145,
  [SMALL_STATE(51)] = 1166,
  [SMALL_STATE(52)] = 1185,
  [SMALL_STATE(53)] = 1204,
  [SMALL_STATE(54)] = 1223,
  [SMALL_STATE(55)] = 1244,
  [SMALL_STATE(56)] = 1265,
  [SMALL_STATE(57)] = 1284,
  [SMALL_STATE(58)] = 1303,
  [SMALL_STATE(59)] = 1322,
  [SMALL_STATE(60)] = 1341,
  [SMALL_STATE(61)] = 1362,
  [SMALL_STATE(62)] = 1381,
  [SMALL_STATE(63)] = 1402,
  [SMALL_STATE(64)] = 1412,
  [SMALL_STATE(65)] = 1422,
  [SMALL_STATE(66)] = 1432,
  [SMALL_STATE(67)] = 1442,
  [SMALL_STATE(68)] = 1452,
  [SMALL_STATE(69)] = 1462,
  [SMALL_STATE(70)] = 1472,
  [SMALL_STATE(71)] = 1482,
  [SMALL_STATE(72)] = 1492,
  [SMALL_STATE(73)] = 1502,
  [SMALL_STATE(74)] = 1512,
  [SMALL_STATE(75)] = 1522,
  [SMALL_STATE(76)] = 1532,
  [SMALL_STATE(77)] = 1542,
  [SMALL_STATE(78)] = 1552,
  [SMALL_STATE(79)] = 1562,
  [SMALL_STATE(80)] = 1572,
  [SMALL_STATE(81)] = 1583,
  [SMALL_STATE(82)] = 1594,
  [SMALL_STATE(83)] = 1607,
  [SMALL_STATE(84)] = 1618,
  [SMALL_STATE(85)] = 1629,
  [SMALL_STATE(86)] = 1640,
  [SMALL_STATE(87)] = 1651,
  [SMALL_STATE(88)] = 1662,
  [SMALL_STATE(89)] = 1672,
  [SMALL_STATE(90)] = 1682,
  [SMALL_STATE(91)] = 1692,
  [SMALL_STATE(92)] = 1702,
  [SMALL_STATE(93)] = 1712,
  [SMALL_STATE(94)] = 1722,
  [SMALL_STATE(95)] = 1732,
  [SMALL_STATE(96)] = 1742,
  [SMALL_STATE(97)] = 1749,
  [SMALL_STATE(98)] = 1756,
  [SMALL_STATE(99)] = 1761,
  [SMALL_STATE(100)] = 1766,
  [SMALL_STATE(101)] = 1770,
  [SMALL_STATE(102)] = 1774,
  [SMALL_STATE(103)] = 1778,
  [SMALL_STATE(104)] = 1782,
  [SMALL_STATE(105)] = 1786,
  [SMALL_STATE(106)] = 1790,
  [SMALL_STATE(107)] = 1794,
  [SMALL_STATE(108)] = 1798,
  [SMALL_STATE(109)] = 1802,
  [SMALL_STATE(110)] = 1806,
  [SMALL_STATE(111)] = 1810,
  [SMALL_STATE(112)] = 1814,
  [SMALL_STATE(113)] = 1818,
  [SMALL_STATE(114)] = 1822,
  [SMALL_STATE(115)] = 1826,
  [SMALL_STATE(116)] = 1830,
  [SMALL_STATE(117)] = 1834,
  [SMALL_STATE(118)] = 1838,
  [SMALL_STATE(119)] = 1842,
  [SMALL_STATE(120)] = 1846,
  [SMALL_STATE(121)] = 1850,
  [SMALL_STATE(122)] = 1854,
  [SMALL_STATE(123)] = 1858,
  [SMALL_STATE(124)] = 1862,
  [SMALL_STATE(125)] = 1866,
  [SMALL_STATE(126)] = 1870,
  [SMALL_STATE(127)] = 1874,
  [SMALL_STATE(128)] = 1878,
  [SMALL_STATE(129)] = 1882,
  [SMALL_STATE(130)] = 1886,
  [SMALL_STATE(131)] = 1890,
  [SMALL_STATE(132)] = 1894,
  [SMALL_STATE(133)] = 1898,
  [SMALL_STATE(134)] = 1902,
  [SMALL_STATE(135)] = 1906,
  [SMALL_STATE(136)] = 1910,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1918,
  [SMALL_STATE(139)] = 1922,
  [SMALL_STATE(140)] = 1926,
  [SMALL_STATE(141)] = 1930,
  [SMALL_STATE(142)] = 1934,
  [SMALL_STATE(143)] = 1938,
  [SMALL_STATE(144)] = 1942,
  [SMALL_STATE(145)] = 1946,
  [SMALL_STATE(146)] = 1950,
  [SMALL_STATE(147)] = 1954,
  [SMALL_STATE(148)] = 1958,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 3, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 2, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_1, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_string_depth_1, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_macro, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_macro, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_string_depth_1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_string, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_variable, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_variable, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_keyword, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_keyword, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_string, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_string, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_macro, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_macro, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_macro_depth_1, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_1, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__program_line, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__program_line, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_3_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_2_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_5_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_6_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_1_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_string_depth_4_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_string_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_string_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_string_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_2, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_3, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_5, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_4, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_2, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_3, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_6, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_5, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_6, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_string_depth_4, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mata_block_repeat2, 2, 0, 0),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mata_block_repeat2, 2, 0, 0), SHIFT_REPEAT(132),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mata_block_repeat1, 2, 0, 0),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mata_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 2, 0, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat2, 2, 0, 4), SHIFT_REPEAT(99),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat2, 2, 0, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mata_line, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_definition_repeat2, 1, 0, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mata_block, 4, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_3, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_2, 3, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_4, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mata_block, 5, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5, 0, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mata_block, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_5, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_macro_depth_6, 3, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, 0, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, 0, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mata_block, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, 0, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_start = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_stata_external_scanner_create(void);
void tree_sitter_stata_external_scanner_destroy(void *);
bool tree_sitter_stata_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_stata_external_scanner_serialize(void *, char *);
void tree_sitter_stata_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_stata(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_stata_external_scanner_create,
      tree_sitter_stata_external_scanner_destroy,
      tree_sitter_stata_external_scanner_scan,
      tree_sitter_stata_external_scanner_serialize,
      tree_sitter_stata_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

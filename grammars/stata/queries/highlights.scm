; Syntax highlighting queries for Stata
; Full capture set for Zed (depth-aware macros/strings)

; Comments
(line_comment) @comment
(block_comment) @comment

; Strings
(double_string) @string

; Compound strings (depth 1-6)
(compound_string_depth_1) @string.depth.1
(compound_string_depth_2) @string.depth.2
(compound_string_depth_3) @string.depth.3
(compound_string_depth_4) @string.depth.4
(compound_string_depth_5) @string.depth.5
(compound_string_depth_6) @string.depth.6

; Local macros (depth 1-6)
(local_macro_depth_1) @variable.macro.local.depth.1
(local_macro_depth_2) @variable.macro.local.depth.2
(local_macro_depth_3) @variable.macro.local.depth.3
(local_macro_depth_4) @variable.macro.local.depth.4
(local_macro_depth_5) @variable.macro.local.depth.5
(local_macro_depth_6) @variable.macro.local.depth.6

; Global macros (non-depth)
(global_macro) @variable

; Control flow keywords
(control_keyword) @keyword

; Prefix keywords
(prefix) @keyword

; Program definition keywords
[
  "program"
  "define"
  "end"
  "mata"
] @keyword

; Macro definition keywords
[
  "local"
  "loc"
  "global"
  "gl"
  "tempvar"
  "tempname"
  "tempfile"
] @keyword

; Language keywords parsed as identifiers
((identifier) @keyword
  (#match? @keyword "^(in|using|do|run|include)$"))

; Types
(type_keyword) @type

; Built-in variables
(builtin_variable) @variable.builtin

; Missing values
(missing_value) @constant

; Numbers
(number) @number

; Operators (including interaction #)
(operator) @operator

; Program names
(program_definition
  name: (identifier) @function)

; Command names
(command
  name: (identifier) @function)

; Macro definition names
(macro_definition
  name: (identifier) @variable)

; Mata block punctuation
(mata_block "{" @punctuation.bracket)
(mata_block "}" @punctuation.bracket)

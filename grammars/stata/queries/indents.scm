; Indentation queries for Stata

; Indent after block openers
(program_definition) @indent
(mata_block) @indent

; Outdent on block closers
"}" @outdent
"end" @outdent

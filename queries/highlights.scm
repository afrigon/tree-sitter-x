[ ":" "," ] @punctuation.delimiter
[ "(" ")" "{" "}" ] @punctuation.bracket
[ "->" ] @punctuation.special

; [
  ; "if"
  ; "else"
  ; "match"
  ; "type"
  ; "enum"
  ; "proto"
; ] @keyword

; [
;   "+"
;   "-"
;   "*"
;   "/"
;   "%"
;   "~~"
;   "<<"
;   ">>"
;   "&&"
;   "||"
;   ">"
;   "<"
;   "<="
;   ">="
;   "="
;   "~="
;   "|"
;   "&"
;   ".."
;   "..="
;   ":="
; ] @operator

"return" @keyword.return
"fun" @keyword.function
["let" "mut" "selfless" "type" "enum" "proto" "extern"] @keyword
["continue" "break"] @repeat

(function_declaration (identifier) @function)
(function_parameter label: (identifier)) @label

(string_literal) @string
(boolean_literal) @constant.builtin
"nil" @constant.builtin

[
  (decimal_literal)
  (binary_literal)
  (octal_literal)
  (hexadecimal_literal)
] @number

(real_literal) @float

(type) @type
(type_declaration (identifier) @type)
(member_block_item (variable_declaration (identifier) @property))

(extern_declaration (identifier) @type)
(proto_declaration (identifier) @type)
(enum_declaration (identifier) @enum)

(comment) @comment @spell

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
"extern" @keyword

(extern_declaration (identifier) @function)
(function_declaration (identifier) @function)
(function_parameter label: (identifier)) @label

(string_literal) @string
(boolean_literal) @constant.builtin

[
  (decimal_literal)
  (binary_literal)
  (octal_literal)
  (hexadecimal_literal)
] @number

(real_literal) @float

"nil" @constant.builtin

["continue" "break"] @repeat

["let" "mut"] @keyword

(type) @type

(comment) @comment @spell

[ ":" "," "->" ] @punctuation.delimiter
[ "(" ")" "{" "}" ] @punctuation.bracket

[
  "extern"
  ; "if"
  ; "else"
  ; "match"
  ; "loop"
  "return"
  ; "type"
  ; "enum"
  ; "proto"
] @keyword

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

"fun" @keyword.function

(function_declaration (identifier) @function)
(function_parameter label: (identifier)) @label

(string_literal) @string
(boolean_literal) @boolean

[
  (decimal_literal)
  (binary_literal)
  (octal_literal)
  (hexadecimal_literal)
  (real_literal)
] @number

"nil" @null

["continue" "break"] @repeat

["let" "mut"] @keyword

(type) @type


(comment) @comment @spell

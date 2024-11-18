; [ "." ":" "," ] @punctuation.delimiter
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

(function_declaration (identifier) @method)

(string_literal) @string
(boolean_literal) @boolean

[
  (decimal_literal)
  (binary_literal)
  (octal_literal)
  (hexadecimal_literal)
  (real_literal)
] @number

["continue" "break"] @repeat

["let" "mut"] @keyword

(comment) @comment

[ "." ":" "," ] @punctuation.delimiter
[ "(" ")" "[" "]" "{" "}" ] @punctuation.bracket

[
  "extern",
  "fun",
  "if",
  "else",
  "match",
  "loop",
  "return",
  "break",
  "continue",
  "type",
  "enum",
  "proto",
] @keyword

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "~~"
  "<<"
  ">>"
  "&&"
  "||"
  ">"
  "<"
  "<="
  ">="
  "="
  "~="
  "|"
  "&"
  ".."
  "..="
  ":="
] @operator

"fun" @keyword.function

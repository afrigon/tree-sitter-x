/**
 * @file A tree-sitter grammar for the x programming language.
 * @author Alexandre Frigon <alexandre@frigon.app>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

const DEC_DIGITS = token(sep1(/[0-9]+/, /_+/));
const HEX_DIGITS = token(sep1(/[0-9a-fA-F]+/, /_+/));
const OCT_DIGITS = token(sep1(/[0-7]+/, /_+/));
const BIN_DIGITS = token(sep1(/[01]+/, /_+/));
const REAL_EXPONENT = token(seq(/[eE]/, optional(/[+-]/), DEC_DIGITS));

module.exports = grammar({
  name: "x",
  rules: {
    source_file: ($) => optional(repeat($.declaration)),
    declaration: ($) => choice($.function_declaration),
    function_declaration: ($) =>
      seq(
        "fun",
        field("name", choice($.identifier)),
        $.function_signature,
        $.function_body,
      ),
    function_signature: ($) => "()",
    function_body: ($) => "{}",
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});

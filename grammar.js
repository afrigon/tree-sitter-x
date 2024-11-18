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

const PRECS = {
  control_transfer: 0,
};

module.exports = grammar({
  name: "x",
  extras: ($) => [
    $.comment,
    /\s+/, // Whitespace
  ],
  rules: {
    source_file: ($) => optional($.code_block),
    code_block: ($) => seq($.code_block_item, repeat($.code_block_item)),
    code_block_container: ($) => seq("{", optional($.code_block), "}"),
    code_block_item: ($) => choice($.declaration, $.expression, $.statement),
    declaration: ($) =>
      choice(
        $.function_declaration,
        $.variable_declaration,
        $.extern_declaration,
      ),
    variable_declaration: ($) =>
      prec.right(
        seq(
          "let",
          optional("mut"),
          $.identifier,
          optional($.type),
          "=",
          optional($.expression),
        ),
      ),
    function_declaration: ($) =>
      seq(
        "fun",
        optional("mut"),
        $.identifier,
        $.function_signature,
        $.function_body,
      ),
    extern_declaration: ($) =>
      seq("extern", "fun", $.identifier, $.function_signature),
    function_signature: ($) =>
      seq($.function_parameters, optional($.return_clause)),
    function_parameters: ($) =>
      seq("(", optional(sep1($.function_parameter, ",")), ")"),
    function_parameter: ($) =>
      seq(field("label", optional($.identifier)), $.identifier, ":", $.type),
    return_clause: ($) => seq("->", $.type),
    function_body: ($) => $.code_block_container,
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    composed_identifier: ($) => sep1($.identifier, "."),
    comment: ($) => token(seq("//", /.*/)),
    type: ($) => choice($.identifier_type),
    identifier_type: ($) => $.identifier,
    statement: ($) => choice($.return_statement, "break", "continue"),
    return_statement: ($) =>
      prec.right(PRECS.control_transfer, seq("return", optional($.expression))),
    expression: ($) => choice($.primary_expression, $.identifier),
    primary_expression: ($) =>
      choice(
        $.literal_expression,
        // $.tuple_expression,
      ),
    literal_expression: ($) =>
      choice(
        $.boolean_literal,
        $.decimal_literal,
        $.binary_literal,
        $.octal_literal,
        $.hexadecimal_literal,
        $.real_literal,
        $.string_literal,
        "nil",
      ),
    boolean_literal: ($) => token(choice("true", "false")),
    decimal_literal: ($) => token(seq(optional(/[1-9]/), DEC_DIGITS)),
    binary_literal: ($) => token(seq("0b", BIN_DIGITS)),
    octal_literal: ($) => token(seq("0o", OCT_DIGITS)),
    hexadecimal_literal: ($) => token(seq("0x", HEX_DIGITS)),
    real_literal: ($) =>
      token(
        choice(
          seq(DEC_DIGITS, REAL_EXPONENT),
          seq(optional(DEC_DIGITS), ".", DEC_DIGITS, optional(REAL_EXPONENT)),
        ),
      ),
    string_literal: ($) => seq('"', repeat(/[^\\"]+/), '"'),
  },
});

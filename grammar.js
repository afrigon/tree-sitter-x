/**
 * @file A tree-sitter grammar for the x programming language.
 * @author Alexandre Frigon <alexandre@frigon.app>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "x",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_let = 3,
  anon_sym_mut = 4,
  anon_sym_COLON = 5,
  anon_sym_EQ = 6,
  anon_sym_fun = 7,
  anon_sym_extern = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DASH_GT = 12,
  sym_identifier = 13,
  sym_comment = 14,
  anon_sym_break = 15,
  anon_sym_continue = 16,
  anon_sym_return = 17,
  anon_sym_nil = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_decimal_literal = 21,
  sym_binary_literal = 22,
  sym_octal_literal = 23,
  sym_hexadecimal_literal = 24,
  sym_real_literal = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_literal_token1 = 27,
  sym_source_file = 28,
  sym_code_block = 29,
  sym_code_block_container = 30,
  sym_code_block_item = 31,
  sym_declaration = 32,
  sym_variable_declaration = 33,
  sym_function_declaration = 34,
  sym_extern_declaration = 35,
  sym_function_signature = 36,
  sym_function_parameters = 37,
  sym_function_parameter = 38,
  sym_return_clause = 39,
  sym_function_body = 40,
  sym_type = 41,
  sym_identifier_type = 42,
  sym_statement = 43,
  sym_return_statement = 44,
  sym_expression = 45,
  sym_primary_expression = 46,
  sym_literal_expression = 47,
  sym_boolean_literal = 48,
  sym_string_literal = 49,
  aux_sym_code_block_repeat1 = 50,
  aux_sym_function_parameters_repeat1 = 51,
  aux_sym_string_literal_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_fun] = "fun",
  [anon_sym_extern] = "extern",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_decimal_literal] = "decimal_literal",
  [sym_binary_literal] = "binary_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_hexadecimal_literal] = "hexadecimal_literal",
  [sym_real_literal] = "real_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_source_file] = "source_file",
  [sym_code_block] = "code_block",
  [sym_code_block_container] = "code_block_container",
  [sym_code_block_item] = "code_block_item",
  [sym_declaration] = "declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_extern_declaration] = "extern_declaration",
  [sym_function_signature] = "function_signature",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter] = "function_parameter",
  [sym_return_clause] = "return_clause",
  [sym_function_body] = "function_body",
  [sym_type] = "type",
  [sym_identifier_type] = "identifier_type",
  [sym_statement] = "statement",
  [sym_return_statement] = "return_statement",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_literal_expression] = "literal_expression",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_binary_literal] = sym_binary_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_hexadecimal_literal] = sym_hexadecimal_literal,
  [sym_real_literal] = sym_real_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_source_file] = sym_source_file,
  [sym_code_block] = sym_code_block,
  [sym_code_block_container] = sym_code_block_container,
  [sym_code_block_item] = sym_code_block_item,
  [sym_declaration] = sym_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_extern_declaration] = sym_extern_declaration,
  [sym_function_signature] = sym_function_signature,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter] = sym_function_parameter,
  [sym_return_clause] = sym_return_clause,
  [sym_function_body] = sym_function_body,
  [sym_type] = sym_type,
  [sym_identifier_type] = sym_identifier_type,
  [sym_statement] = sym_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_literal_expression] = sym_literal_expression,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_container] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_item] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_label = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_label] = "label",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 87,
        '(', 32,
        ')', 34,
        ',', 33,
        '-', 6,
        '.', 18,
        '/', 5,
        '0', 80,
        ':', 27,
        '=', 28,
        'b', 56,
        'c', 55,
        'e', 70,
        'f', 36,
        'l', 42,
        'm', 66,
        'n', 45,
        'r', 44,
        't', 57,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '/') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 87,
        ')', 34,
        ',', 33,
        '-', 6,
        '.', 18,
        '/', 5,
        '0', 80,
        '=', 28,
        'b', 56,
        'c', 55,
        'e', 70,
        'f', 36,
        'l', 42,
        'n', 45,
        'r', 44,
        't', 57,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(73);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_octal_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_decimal_literal] = ACTIONS(1),
    [sym_binary_literal] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
    [sym_hexadecimal_literal] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_code_block] = STATE(72),
    [sym_code_block_item] = STATE(3),
    [sym_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(30),
    [sym_function_declaration] = STATE(30),
    [sym_extern_declaration] = STATE(30),
    [sym_statement] = STATE(31),
    [sym_return_statement] = STATE(36),
    [sym_expression] = STATE(31),
    [sym_primary_expression] = STATE(37),
    [sym_literal_expression] = STATE(28),
    [sym_boolean_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(23),
    [sym_octal_literal] = ACTIONS(23),
    [sym_hexadecimal_literal] = ACTIONS(23),
    [sym_real_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [2] = {
    [sym_code_block_item] = STATE(2),
    [sym_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(30),
    [sym_function_declaration] = STATE(30),
    [sym_extern_declaration] = STATE(30),
    [sym_statement] = STATE(31),
    [sym_return_statement] = STATE(36),
    [sym_expression] = STATE(31),
    [sym_primary_expression] = STATE(37),
    [sym_literal_expression] = STATE(28),
    [sym_boolean_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [aux_sym_code_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_fun] = ACTIONS(32),
    [anon_sym_extern] = ACTIONS(35),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(41),
    [anon_sym_continue] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(44),
    [anon_sym_nil] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(50),
    [anon_sym_false] = ACTIONS(50),
    [sym_decimal_literal] = ACTIONS(47),
    [sym_binary_literal] = ACTIONS(53),
    [sym_octal_literal] = ACTIONS(53),
    [sym_hexadecimal_literal] = ACTIONS(53),
    [sym_real_literal] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
  },
  [3] = {
    [sym_code_block_item] = STATE(4),
    [sym_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(30),
    [sym_function_declaration] = STATE(30),
    [sym_extern_declaration] = STATE(30),
    [sym_statement] = STATE(31),
    [sym_return_statement] = STATE(36),
    [sym_expression] = STATE(31),
    [sym_primary_expression] = STATE(37),
    [sym_literal_expression] = STATE(28),
    [sym_boolean_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [aux_sym_code_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(23),
    [sym_octal_literal] = ACTIONS(23),
    [sym_hexadecimal_literal] = ACTIONS(23),
    [sym_real_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [4] = {
    [sym_code_block_item] = STATE(2),
    [sym_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(30),
    [sym_function_declaration] = STATE(30),
    [sym_extern_declaration] = STATE(30),
    [sym_statement] = STATE(31),
    [sym_return_statement] = STATE(36),
    [sym_expression] = STATE(31),
    [sym_primary_expression] = STATE(37),
    [sym_literal_expression] = STATE(28),
    [sym_boolean_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [aux_sym_code_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(23),
    [sym_octal_literal] = ACTIONS(23),
    [sym_hexadecimal_literal] = ACTIONS(23),
    [sym_real_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [5] = {
    [sym_code_block] = STATE(70),
    [sym_code_block_item] = STATE(3),
    [sym_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(30),
    [sym_function_declaration] = STATE(30),
    [sym_extern_declaration] = STATE(30),
    [sym_statement] = STATE(31),
    [sym_return_statement] = STATE(36),
    [sym_expression] = STATE(31),
    [sym_primary_expression] = STATE(37),
    [sym_literal_expression] = STATE(28),
    [sym_boolean_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(23),
    [sym_octal_literal] = ACTIONS(23),
    [sym_hexadecimal_literal] = ACTIONS(23),
    [sym_real_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(32), 1,
      sym_expression,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(19), 2,
      anon_sym_nil,
      sym_decimal_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(23), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(67), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [49] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_expression,
    STATE(28), 1,
      sym_literal_expression,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(19), 2,
      anon_sym_nil,
      sym_decimal_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(23), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(71), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [98] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_expression,
    STATE(28), 1,
      sym_literal_expression,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(19), 2,
      anon_sym_nil,
      sym_decimal_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(23), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(75), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    STATE(28), 1,
      sym_literal_expression,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(19), 2,
      anon_sym_nil,
      sym_decimal_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(23), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(79), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(33), 1,
      sym_expression,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(19), 2,
      anon_sym_nil,
      sym_decimal_literal,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(23), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(83), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(87), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(91), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym_return_clause,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(95), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(101), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(105), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(109), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(113), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(117), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(121), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(125), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(67), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(129), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(133), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(137), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(141), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(145), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(149), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(153), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(157), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(161), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(165), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(79), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(71), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(169), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(173), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(177), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(181), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(185), 11,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_decimal_literal,
  [996] = 4,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      aux_sym_string_literal_token1,
    STATE(39), 1,
      aux_sym_string_literal_repeat1,
  [1009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_parameters,
    STATE(47), 1,
      sym_function_signature,
  [1022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_parameters_repeat1,
  [1035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(11), 1,
      sym_identifier_type,
    STATE(69), 1,
      sym_type,
  [1048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_function_body,
    STATE(29), 1,
      sym_code_block_container,
  [1061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_parameters,
    STATE(24), 1,
      sym_function_signature,
  [1074] = 4,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_string_literal_token1,
    STATE(54), 1,
      aux_sym_string_literal_repeat1,
  [1087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_function_parameters_repeat1,
  [1100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_function_body,
    STATE(29), 1,
      sym_code_block_container,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(46), 1,
      sym_function_parameter,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_parameters,
    STATE(43), 1,
      sym_function_signature,
  [1139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(11), 1,
      sym_identifier_type,
    STATE(17), 1,
      sym_type,
  [1152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(11), 1,
      sym_identifier_type,
    STATE(65), 1,
      sym_type,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(11), 1,
      sym_identifier_type,
    STATE(64), 1,
      sym_type,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_parameters_repeat1,
  [1191] = 4,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_string_literal_token1,
    STATE(39), 1,
      aux_sym_string_literal_repeat1,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(11), 1,
      sym_identifier_type,
    STATE(58), 1,
      sym_type,
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(60), 1,
      sym_function_parameter,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      anon_sym_EQ,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_EQ,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      sym_identifier,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_mut,
    ACTIONS(239), 1,
      sym_identifier,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_mut,
    ACTIONS(243), 1,
      sym_identifier,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_EQ,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COLON,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_EQ,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_identifier,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_fun,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 196,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 394,
  [SMALL_STATE(17)] = 422,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 528,
  [SMALL_STATE(22)] = 554,
  [SMALL_STATE(23)] = 580,
  [SMALL_STATE(24)] = 606,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 658,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 710,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 762,
  [SMALL_STATE(31)] = 788,
  [SMALL_STATE(32)] = 814,
  [SMALL_STATE(33)] = 840,
  [SMALL_STATE(34)] = 866,
  [SMALL_STATE(35)] = 892,
  [SMALL_STATE(36)] = 918,
  [SMALL_STATE(37)] = 944,
  [SMALL_STATE(38)] = 970,
  [SMALL_STATE(39)] = 996,
  [SMALL_STATE(40)] = 1009,
  [SMALL_STATE(41)] = 1022,
  [SMALL_STATE(42)] = 1035,
  [SMALL_STATE(43)] = 1048,
  [SMALL_STATE(44)] = 1061,
  [SMALL_STATE(45)] = 1074,
  [SMALL_STATE(46)] = 1087,
  [SMALL_STATE(47)] = 1100,
  [SMALL_STATE(48)] = 1113,
  [SMALL_STATE(49)] = 1126,
  [SMALL_STATE(50)] = 1139,
  [SMALL_STATE(51)] = 1152,
  [SMALL_STATE(52)] = 1165,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1191,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1217,
  [SMALL_STATE(57)] = 1227,
  [SMALL_STATE(58)] = 1237,
  [SMALL_STATE(59)] = 1245,
  [SMALL_STATE(60)] = 1255,
  [SMALL_STATE(61)] = 1263,
  [SMALL_STATE(62)] = 1273,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1293,
  [SMALL_STATE(65)] = 1301,
  [SMALL_STATE(66)] = 1308,
  [SMALL_STATE(67)] = 1315,
  [SMALL_STATE(68)] = 1322,
  [SMALL_STATE(69)] = 1329,
  [SMALL_STATE(70)] = 1336,
  [SMALL_STATE(71)] = 1343,
  [SMALL_STATE(72)] = 1350,
  [SMALL_STATE(73)] = 1357,
  [SMALL_STATE(74)] = 1364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_type, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_type, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_clause, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_clause, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_declaration, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_container, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_container, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_item, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_item, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_expression, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_container, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_container, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_x(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_let = 3,
  anon_sym_mut = 4,
  anon_sym_EQ = 5,
  anon_sym_fun = 6,
  anon_sym_extern = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON = 11,
  anon_sym_DASH_GT = 12,
  sym_identifier = 13,
  sym_comment = 14,
  anon_sym_break = 15,
  anon_sym_continue = 16,
  anon_sym_return = 17,
  anon_sym_nil = 18,
  sym_boolean_literal = 19,
  sym_decimal_literal = 20,
  sym_binary_literal = 21,
  sym_octal_literal = 22,
  sym_hexadecimal_literal = 23,
  sym_real_literal = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_literal_token1 = 26,
  sym_source_file = 27,
  sym_code_block = 28,
  sym_code_block_container = 29,
  sym_code_block_item = 30,
  sym_declaration = 31,
  sym_variable_declaration = 32,
  sym_function_declaration = 33,
  sym_extern_declaration = 34,
  sym_function_signature = 35,
  sym_function_parameters = 36,
  sym_function_parameter = 37,
  sym_return_clause = 38,
  sym_function_body = 39,
  sym_type = 40,
  sym_identifier_type = 41,
  sym_statement = 42,
  sym_return_statement = 43,
  sym_expression = 44,
  sym_primary_expression = 45,
  sym_literal_expression = 46,
  sym_string_literal = 47,
  aux_sym_code_block_repeat1 = 48,
  aux_sym_function_parameters_repeat1 = 49,
  aux_sym_string_literal_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [anon_sym_fun] = "fun",
  [anon_sym_extern] = "extern",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_nil] = "nil",
  [sym_boolean_literal] = "boolean_literal",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_nil] = anon_sym_nil,
  [sym_boolean_literal] = sym_boolean_literal,
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
  [anon_sym_COLON] = {
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
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 84,
        '(', 31,
        ')', 33,
        ',', 32,
        '-', 6,
        '.', 18,
        '/', 5,
        '0', 77,
        ':', 34,
        '=', 27,
        'b', 55,
        'c', 54,
        'e', 69,
        'f', 36,
        'l', 41,
        'm', 65,
        'n', 44,
        'r', 43,
        't', 56,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '/') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '=') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(79);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 84,
        ')', 33,
        ',', 32,
        '-', 6,
        '.', 18,
        '/', 5,
        '0', 77,
        '=', 27,
        'b', 55,
        'c', 54,
        'e', 69,
        'f', 36,
        'l', 41,
        'n', 44,
        'r', 43,
        't', 56,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_octal_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
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
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_decimal_literal] = ACTIONS(1),
    [sym_binary_literal] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
    [sym_hexadecimal_literal] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_code_block] = STATE(63),
    [sym_code_block_item] = STATE(2),
    [sym_declaration] = STATE(34),
    [sym_variable_declaration] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_extern_declaration] = STATE(31),
    [sym_statement] = STATE(34),
    [sym_return_statement] = STATE(23),
    [sym_expression] = STATE(34),
    [sym_primary_expression] = STATE(32),
    [sym_literal_expression] = STATE(20),
    [sym_string_literal] = STATE(25),
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
    [sym_boolean_literal] = ACTIONS(19),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_hexadecimal_literal] = ACTIONS(21),
    [sym_real_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
  },
  [2] = {
    [sym_code_block_item] = STATE(4),
    [sym_declaration] = STATE(34),
    [sym_variable_declaration] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_extern_declaration] = STATE(31),
    [sym_statement] = STATE(34),
    [sym_return_statement] = STATE(23),
    [sym_expression] = STATE(34),
    [sym_primary_expression] = STATE(32),
    [sym_literal_expression] = STATE(20),
    [sym_string_literal] = STATE(25),
    [aux_sym_code_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [sym_boolean_literal] = ACTIONS(19),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_hexadecimal_literal] = ACTIONS(21),
    [sym_real_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
  },
  [3] = {
    [sym_code_block_item] = STATE(3),
    [sym_declaration] = STATE(34),
    [sym_variable_declaration] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_extern_declaration] = STATE(31),
    [sym_statement] = STATE(34),
    [sym_return_statement] = STATE(23),
    [sym_expression] = STATE(34),
    [sym_primary_expression] = STATE(32),
    [sym_literal_expression] = STATE(20),
    [sym_string_literal] = STATE(25),
    [aux_sym_code_block_repeat1] = STATE(3),
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
    [sym_boolean_literal] = ACTIONS(47),
    [sym_decimal_literal] = ACTIONS(47),
    [sym_binary_literal] = ACTIONS(50),
    [sym_octal_literal] = ACTIONS(50),
    [sym_hexadecimal_literal] = ACTIONS(50),
    [sym_real_literal] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [4] = {
    [sym_code_block_item] = STATE(3),
    [sym_declaration] = STATE(34),
    [sym_variable_declaration] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_extern_declaration] = STATE(31),
    [sym_statement] = STATE(34),
    [sym_return_statement] = STATE(23),
    [sym_expression] = STATE(34),
    [sym_primary_expression] = STATE(32),
    [sym_literal_expression] = STATE(20),
    [sym_string_literal] = STATE(25),
    [aux_sym_code_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [sym_boolean_literal] = ACTIONS(19),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_hexadecimal_literal] = ACTIONS(21),
    [sym_real_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
  },
  [5] = {
    [sym_code_block] = STATE(65),
    [sym_code_block_item] = STATE(2),
    [sym_declaration] = STATE(34),
    [sym_variable_declaration] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_extern_declaration] = STATE(31),
    [sym_statement] = STATE(34),
    [sym_return_statement] = STATE(23),
    [sym_expression] = STATE(34),
    [sym_primary_expression] = STATE(32),
    [sym_literal_expression] = STATE(20),
    [sym_string_literal] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [sym_boolean_literal] = ACTIONS(19),
    [sym_decimal_literal] = ACTIONS(19),
    [sym_binary_literal] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_hexadecimal_literal] = ACTIONS(21),
    [sym_real_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_literal_expression,
    STATE(25), 1,
      sym_string_literal,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_primary_expression,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(21), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(62), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [45] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_literal_expression,
    STATE(25), 1,
      sym_string_literal,
    STATE(26), 1,
      sym_expression,
    STATE(32), 1,
      sym_primary_expression,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(21), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(66), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [90] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_literal_expression,
    STATE(24), 1,
      sym_expression,
    STATE(25), 1,
      sym_string_literal,
    STATE(32), 1,
      sym_primary_expression,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(21), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(70), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(72), 11,
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
  [164] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_literal_expression,
    STATE(25), 1,
      sym_string_literal,
    STATE(32), 1,
      sym_primary_expression,
    STATE(33), 1,
      sym_expression,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(21), 4,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
    ACTIONS(78), 6,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
  [209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
    ACTIONS(80), 11,
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
  [238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DASH_GT,
    STATE(17), 1,
      sym_return_clause,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(86), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(92), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(96), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(100), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(104), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(108), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(112), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(116), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(120), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(124), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(128), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(132), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(62), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(136), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(140), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(144), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(148), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(152), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(156), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(160), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(164), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(70), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(168), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_binary_literal,
      sym_octal_literal,
      sym_hexadecimal_literal,
      sym_real_literal,
      anon_sym_DQUOTE,
    ACTIONS(172), 10,
      anon_sym_let,
      anon_sym_fun,
      anon_sym_extern,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_nil,
      sym_boolean_literal,
      sym_decimal_literal,
  [853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(9), 1,
      sym_identifier_type,
    STATE(64), 1,
      sym_type,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_EQ,
    STATE(9), 1,
      sym_identifier_type,
    STATE(67), 1,
      sym_type,
  [885] = 4,
    ACTIONS(180), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      aux_sym_string_literal_token1,
    STATE(38), 1,
      aux_sym_string_literal_repeat1,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(9), 1,
      sym_identifier_type,
    STATE(56), 1,
      sym_type,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_function_parameters,
    STATE(18), 1,
      sym_function_signature,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_function_parameters_repeat1,
  [937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_function_body,
    STATE(29), 1,
      sym_code_block_container,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_function_body,
    STATE(29), 1,
      sym_code_block_container,
  [963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(46), 1,
      sym_function_parameter,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_function_parameters,
    STATE(43), 1,
      sym_function_signature,
  [989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_parameters_repeat1,
  [1002] = 4,
    ACTIONS(180), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_string_literal_token1,
    STATE(38), 1,
      aux_sym_string_literal_repeat1,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(9), 1,
      sym_identifier_type,
    STATE(16), 1,
      sym_type,
  [1028] = 4,
    ACTIONS(180), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(9), 1,
      sym_identifier_type,
    STATE(59), 1,
      sym_type,
  [1054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_function_parameters,
    STATE(42), 1,
      sym_function_signature,
  [1067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_function_parameters_repeat1,
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      sym_identifier,
  [1090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(57), 1,
      sym_function_parameter,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_mut,
    ACTIONS(220), 1,
      sym_identifier,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_mut,
    ACTIONS(226), 1,
      sym_identifier,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
  [1165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_EQ,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [1186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_fun,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 270,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 324,
  [SMALL_STATE(16)] = 351,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 628,
  [SMALL_STATE(28)] = 653,
  [SMALL_STATE(29)] = 678,
  [SMALL_STATE(30)] = 703,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 753,
  [SMALL_STATE(33)] = 778,
  [SMALL_STATE(34)] = 803,
  [SMALL_STATE(35)] = 828,
  [SMALL_STATE(36)] = 853,
  [SMALL_STATE(37)] = 869,
  [SMALL_STATE(38)] = 885,
  [SMALL_STATE(39)] = 898,
  [SMALL_STATE(40)] = 911,
  [SMALL_STATE(41)] = 924,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 950,
  [SMALL_STATE(44)] = 963,
  [SMALL_STATE(45)] = 976,
  [SMALL_STATE(46)] = 989,
  [SMALL_STATE(47)] = 1002,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1028,
  [SMALL_STATE(50)] = 1041,
  [SMALL_STATE(51)] = 1054,
  [SMALL_STATE(52)] = 1067,
  [SMALL_STATE(53)] = 1080,
  [SMALL_STATE(54)] = 1090,
  [SMALL_STATE(55)] = 1100,
  [SMALL_STATE(56)] = 1110,
  [SMALL_STATE(57)] = 1118,
  [SMALL_STATE(58)] = 1126,
  [SMALL_STATE(59)] = 1136,
  [SMALL_STATE(60)] = 1144,
  [SMALL_STATE(61)] = 1151,
  [SMALL_STATE(62)] = 1158,
  [SMALL_STATE(63)] = 1165,
  [SMALL_STATE(64)] = 1172,
  [SMALL_STATE(65)] = 1179,
  [SMALL_STATE(66)] = 1186,
  [SMALL_STATE(67)] = 1193,
  [SMALL_STATE(68)] = 1200,
  [SMALL_STATE(69)] = 1207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_type, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_type, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_clause, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_clause, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_declaration, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_container, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_container, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_expression, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_item, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_item, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_container, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_container, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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

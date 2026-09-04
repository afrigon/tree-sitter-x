# tree-sitter-x

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the x
programming language. It parses `.x` source files — declarations (`let`,
`fun`, `type`, `enum`, `proto`, `extern`), literals, comments, and `#if`
preprocessor blocks — and ships a syntax highlighting query along with
bindings for C, Go, Node.js, Python, Rust, and Swift.

## Usage

With the Rust binding, load the language into a parser:

```rust
let mut parser = tree_sitter::Parser::new();
parser
    .set_language(&tree_sitter_x::LANGUAGE.into())
    .expect("Error loading X parser");
let tree = parser.parse(code, None).unwrap();
```

The other bindings live under `bindings/` and expose the same language
through each ecosystem's tree-sitter package.

## Development

The parser in `src/` is generated from `grammar.js`:

```sh
npm install
npx tree-sitter generate
```

Try the grammar on a file, or interactively in the browser playground:

```sh
npx tree-sitter parse file.x
npm start
```

Run the binding tests:

```sh
npm test
```

# tree-sitter-stata

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [Stata](https://www.stata.com/) programming language.

This grammar is part of the [Sight](https://github.com/jbearak/sight) project, which provides language server support for Stata in modern code editors.

## Overview

This repository contains a tree-sitter grammar implementation for Stata, enabling:

- **Syntax highlighting** - Accurate highlighting for Stata code including commands, macros, strings, and comments
- **Code parsing** - Incremental parsing for real-time editor features
- **Editor integration** - Used by the Sight Zed extension and other tree-sitter compatible editors

### Supported File Types

- `.do` - Stata do-files
- `.ado` - Stata ado-files (user-written commands)
- `.mata` - Mata source files
- `.doh` - Stata do-file headers

## Installation

### npm

```bash
npm install tree-sitter-stata
```

### Cargo

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-stata = "0.1.8"
```

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const Stata = require('tree-sitter-stata');

const parser = new Parser();
parser.setLanguage(Stata);

const sourceCode = `
// Example Stata code
sysuse auto, clear
summarize price mpg
regress price mpg weight
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Rust

```rust
use tree_sitter::Parser;

fn main() {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_stata::LANGUAGE.into())
        .expect("Error loading Stata grammar");

    let source_code = r#"
// Example Stata code
sysuse auto, clear
summarize price mpg
regress price mpg weight
"#;

    let tree = parser.parse(source_code, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

## Development

### Prerequisites

- [Node.js](https://nodejs.org/) (v14 or later)
- [tree-sitter CLI](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md)
- [Rust](https://www.rust-lang.org/) (for Rust bindings)

Install the tree-sitter CLI:

```bash
npm install -g tree-sitter-cli
```

### Generate Parser

After modifying `grammar.js`, regenerate the parser:

```bash
npm run generate
# or
tree-sitter generate
```

### Build

Build the Node.js bindings:

```bash
npm run build
```

Build the Rust bindings:

```bash
cargo build
```

### Test

Run the tree-sitter test suite:

```bash
npm test
# or
tree-sitter test
```

Run Rust tests:

```bash
cargo test
```

### Parse Example Files

Parse a Stata file to see the syntax tree:

```bash
tree-sitter parse test/test.do
```

## Project Structure

```
tree-sitter-stata/
├── grammar.js          # Grammar definition
├── package.json        # npm package configuration
├── Cargo.toml          # Rust package configuration
├── tree-sitter.json    # Tree-sitter metadata
├── bindings/
│   └── rust/
│       ├── lib.rs      # Rust language bindings
│       └── build.rs    # Rust build script
├── queries/
│   └── highlights.scm  # Syntax highlighting queries
├── src/
│   ├── grammar.json    # Generated grammar JSON
│   ├── node-types.json # Generated node types
│   ├── parser.c        # Generated parser
│   ├── scanner.c       # External scanner for line-start detection
│   └── tree_sitter/    # Tree-sitter header files
└── test/               # Test Stata files
```

## Related Projects

- **[Sight](https://github.com/jbearak/sight)** - Stata Language Server providing IDE features for Stata, with a corresponding VS Code extension
- **[Zed Extension](https://github.com/jbearak/sight/tree/main/zed-extension)** - Zed editor extension using this grammar

## Contributing

Contributions are welcome! Here's how to contribute:

### Reporting Issues

If you find a parsing issue or incorrect syntax highlighting:

1. Open an issue with a minimal Stata code example that demonstrates the problem
2. Include the expected vs actual behavior
3. Specify which editor/integration you're using

### Contributing Code

1. **Fork** the repository
2. **Create a branch** for your feature or fix:
   ```bash
   git checkout -b feature/my-improvement
   ```
3. **Make your changes** to `grammar.js` or other files
4. **Regenerate the parser**:
   ```bash
   npm run generate
   ```
5. **Add tests** for new grammar rules in the `test/` directory
6. **Run tests** to ensure everything passes:
   ```bash
   npm test
   cargo test
   ```
7. **Commit** your changes with a descriptive message
8. **Push** to your fork and open a **Pull Request**

### Grammar Development Tips

- The grammar is defined in `grammar.js` using tree-sitter's JavaScript DSL
- The external scanner (`src/scanner.c`) handles line-start detection for Stata's line-oriented syntax
- Test your changes with real Stata code files to ensure correct parsing
- Use `tree-sitter parse <file>` to inspect the syntax tree

## License

This project is licensed under the [GNU General Public License v3.0](LICENSE).
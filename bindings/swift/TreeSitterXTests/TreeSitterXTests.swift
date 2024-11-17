import XCTest
import SwiftTreeSitter
import TreeSitterX

final class TreeSitterXTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_x())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading X grammar")
    }
}

// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterX",
    products: [
        .library(name: "TreeSitterX", targets: ["TreeSitterX"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterX",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterXTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterX",
            ],
            path: "bindings/swift/TreeSitterXTests"
        )
    ],
    cLanguageStandard: .c11
)

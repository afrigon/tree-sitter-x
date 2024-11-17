package tree_sitter_x_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_x "github.com/afrigon/tree-sitter-x/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_x.Language())
	if language == nil {
		t.Errorf("Error loading X grammar")
	}
}

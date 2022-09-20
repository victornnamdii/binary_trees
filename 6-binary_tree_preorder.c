#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: binary tree
 * @func: function to be applied to each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

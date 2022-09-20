#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}

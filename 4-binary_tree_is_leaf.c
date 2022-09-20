#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == 0 && node->right == 0)
		return (1);
	return (0);
}

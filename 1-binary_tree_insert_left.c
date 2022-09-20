#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: parent of the node
 * @value: value of node
 * Return: a pointer to the newly created node or NULL during failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	new_node->left = parent->left;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}

#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right -  inserts a node as the
 * right-child of another node
 *
 * @parent: parent of the node
 * @value: value of node
 * Return: a pointer to the newly created node or NULL during failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;
	if (new_node->right != NULL)
		new_node->right->parent = new_node;
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}

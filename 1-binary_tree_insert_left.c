#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new_node at the left of a node
 * @parent: the node the new_node is to be added to the left of
 * @value: the data to be stored in new node
 * Return: new node on sucess Null otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}

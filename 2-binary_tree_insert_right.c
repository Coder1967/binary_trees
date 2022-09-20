#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a new_node at the right of a node
 * @parent: the node the new_node is to be added to the right of
 * @value: the data to be stored in new node
 * Return: returns address of the newly inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}

#include "binary_trees.h"

/**
 * binary_tree_node - Creates new node for tree
 * @value: calue for the newly created node
 * @parent: thre parent of the new node
 * Return: address in memory of new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}

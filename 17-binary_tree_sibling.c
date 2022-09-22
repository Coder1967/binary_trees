#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node in the tree
 * @node: address of the node whose sibling os to be found
 * Return: returns the address of the sibling(on success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

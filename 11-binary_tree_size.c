#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: the address of the node to whose size is to be measured
 * Return: returns the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((binary_tree_size(tree->left)) + (binary_tree_size(tree->right)) + 1);
}

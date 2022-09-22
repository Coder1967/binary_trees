#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of the given node in a binary tree
 * @tree: the node whose depth is to be measured
 * Return: returns the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}

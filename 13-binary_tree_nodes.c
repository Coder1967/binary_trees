#include "binary_trees.h"
/**
 *  binary_tree_nodes - counts number of non leaf nodes
 *  @tree: address to root of tree
 *  Return: number of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: address of the root of tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (right == 0 || left == 0)
		return (0);
	else
		return (1);
	if (tree->left && tree->right)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}

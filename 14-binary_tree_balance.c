#include "binary_trees.h"
/**
 * binary_tree_balance - checks the balance factor of the tree
 * @tree: address of root of the tree to be checked
 * Return: retuns the balance of tree(on success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = tree_nodes(tree->left);
	right = tree_nodes(tree->right);

	return (left - right);
}

/**
 * tree_nodes - counts the number of nodes to the longest leaf
 * @tree: pointer to the root node of the tree
 * Return: height of the binary tree
 */
size_t tree_nodes(const binary_tree_t *tree)
{
	size_t left_n, right_n;

	if (!tree)
		return (0);
	left_n = tree_nodes(tree->left);
	right_n = tree_nodes(tree->right);
	if (left_n >= right_n)
		return (left_n + 1);
	return (right_n + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree in inorder format
 * @tree: pointer to the root of tree
 * @func: pointer to function that prints integer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	(func)(tree->n);
	binary_tree_inorder(tree->right, func);
}

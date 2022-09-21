#include "binary_trees.h"
/**
 * binary_tree_preorder - prints tree in preorder format
 * @tree: pointer to the root of tree
 * @func: pointer to function that prints integer
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

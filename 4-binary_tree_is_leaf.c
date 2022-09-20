#include "binary_trees.h"
/**
 *  binary_tree_is_leaf - returns 1 if node is a leaf otherwise return 0
 *  @node: node to be checked
 *  Return: 0 if not a leaf or if node is null otherwise returns 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}

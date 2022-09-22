#include "binary_trees.h"
/**
 */
int binary_tree_is_full(const binary_tree_t *tree){
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (!tree->left && !tree->right)
	{
		left = 1;
	}
	else if (tree->left && tree->right)
	{
		left = 1;
	}
	else
	{
		left = 0;
	}
	if (!tree-> right && !tree->left)
	{
                right = 1;
        }
        else if (tree->right && tree->left)
	{
                left = 1;
        }
        else
        {
                right = 0;
        }

	if (left == 0 || right == 0)
		return (0);
	else
	{
		return (1);
	}
}

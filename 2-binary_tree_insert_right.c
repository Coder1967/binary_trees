#include "binary_trees.h"
                                                  /**                                                * binary_tree_insert_right - inserts a new_node at the right of a node                                * @parent: the node the new_node is to be added to the right of
 * @value: the data to be stored in new node       */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	new_node = binary_tree_node(parent, value);
        if (parent == NULL)
		return NULL;
	if (new_node == NULL)
		return NULL;
	if (parent->right == NULL)
        {
		parent->right = new_node;
        }
	else
	{
		tmp = parent->right;
		new_node->right = tmp;
		parent->right = new_node;
        }
	return new_node;
}

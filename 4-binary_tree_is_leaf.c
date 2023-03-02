#include "binary_trees.h"

/**
 * binary_tree_is_leaf - tells us if a node is a leaf
 * @node: node whose st atus is to be determined
 * Return: return 0 if node is a leaf else return 1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

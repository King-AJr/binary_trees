#include "binary_trees.h"

/**
 * binary_tree_is_root - helps determine if node is root node
 * @node: pointer to node for check
 * Return: return 1 if node is root else return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node->parent == NULL) && (node->left != NULL || node->right != NULL))
		return (1);

	if (node == NULL)
		return (0);

	return (0);
}

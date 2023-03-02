#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the sibling of a given node
 * @node: pointer to node whose sibling is needed
 * Return: return null if node or parent is null else return sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left && node->parent->right != NULL)
	{
		return (node->parent->right);
	}
	else if (node == node->parent->right && node->parent->left != NULL)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}

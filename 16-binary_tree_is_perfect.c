#include "binary_trees.h"
/**
* binary_tree_is_perfect - check if a binary tree is perfect
*
* @tree: pointer to the tree node of the binary tree
*
* Return: 1 if the binary tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

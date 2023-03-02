#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses through a tree using inorder method
 * @tree: pointer to root node
 * @func: function to fetch node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

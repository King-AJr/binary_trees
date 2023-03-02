#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through a tree using postorder method
 * @tree: node to root of tree
 * @func: pointer to function to call each node
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

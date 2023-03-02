#include "binary_trees.h"

/**                                                    * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *                                                     * Return: If tree is NULL, your function must return 0, else return height.
 */                                                   size_t tree_height(const binary_tree_t *tree)  {                                                             if (tree)                                             {
                size_t l = 0, r = 0;                  
                l = tree->left ? 1 + tree_height(tree->left) : 0;
                r = tree->right ? 1 + tree_height(tree->right) : 0;
                return ((l > r) ? l : r);
        }                                                     return (0);
}

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

	size_t left_height = tree_height(tree->left);
	size_t right_height = tree_height(tree->right);

	if (left_height != right_height)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

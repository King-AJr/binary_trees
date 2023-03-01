#include "binary_trees.h"

/**
 * binary_tree_node - adds a node to the parent of a binary tree
 * @parent: parent node of new node
 * @value: value to be store in new node
 * Return: pointer to new node or NULL in cases of error
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

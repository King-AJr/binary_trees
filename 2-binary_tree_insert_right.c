#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates and adds new
 * node to the right of a given node
 * @parent: parent to new node
 * @value: value to be stored in new node
 * Return: return new node or null in cases of failure
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}

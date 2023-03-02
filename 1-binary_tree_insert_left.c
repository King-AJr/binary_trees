#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates and adds new 
 * node to the left of a given node
 * @parent: parent to new node
 * @value: value to be stored in new node
 * Return: return new node or null in cases of failure
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}

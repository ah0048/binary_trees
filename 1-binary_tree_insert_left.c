#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a binary tree node at left
 * @parent: Pointer to the parent node
 * @value: value stored in the node
 * Return: the new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!NewNode || !parent)
		return (NULL);
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->parent = parent;
	if (parent->left)
	{
		parent->left->parent = NewNode;
		NewNode->left = parent->left;
		parent->left = NewNode;
	}
	else
	{
		parent->left = NewNode;
	}
	return (NewNode);
}

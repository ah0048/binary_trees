#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a binary tree node at right
 * @parent: Pointer to the parent node
 * @value: value stored in the node
 * Return: the new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (!parent)
		return (NULL);
	NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!NewNode)
		return (NULL);
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->parent = parent;
	if (parent->right != NULL)
	{
		parent->right->parent = NewNode;
		NewNode->right = parent->right;
	}
	parent->right = NewNode;
	return (NewNode);
}

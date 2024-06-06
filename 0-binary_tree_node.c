#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: value stored in the node
 * Return: the new created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!NewNode)
		return (NULL);
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->parent = parent;
	return (NewNode);
}

#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0, left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	bf = left_height - right_height;
	return (bf);
}

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		num_leaf = 0;
	else if (tree->left != NULL && tree->right != NULL)
		num_leaf = 2;
	else
		num_leaf = 1;
	return (num_leaf);
}

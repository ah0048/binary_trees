#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes with a child or more
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		num = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	return (num);
}

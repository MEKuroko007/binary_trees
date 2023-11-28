#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child
 * @tree: pointer to the tree
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_nodes(tree->left);
	size_t right = binary_tree_nodes(tree->right);

	return (left + right + (tree->left != NULL || tree->right != NULL));
}

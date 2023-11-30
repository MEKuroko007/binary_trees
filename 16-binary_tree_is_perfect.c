#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	return (leaves == (1 << height));
}

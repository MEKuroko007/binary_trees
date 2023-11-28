#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if is a leaf.
 * @node: leaf checking
 * Return: 1 is a leaf , 0 no
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node != NULL && node->left == NULL && node->right == NULL);
}

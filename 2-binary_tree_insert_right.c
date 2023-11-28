#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the parent node
 * @value: value to be assigned to the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new_right_node = binary_tree_node(parent, value);

    if (new_right_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        parent->right->parent = new_right_node;
        new_right_node->right = parent->right;
    }

    parent->right = new_right_node;

    return (new_right_node);
}

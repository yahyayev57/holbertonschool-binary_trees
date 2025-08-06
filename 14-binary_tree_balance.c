#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node to measure balance factor
 * Return: Balance factor (left subtree height - right subtree height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return ((int)left_height - (int)right_height);
}

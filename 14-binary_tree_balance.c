#include "binary_trees.h"

/**
 * binary_tree_height - Helper function to measure height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of tree, or 0 if NULL
 */
static size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

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

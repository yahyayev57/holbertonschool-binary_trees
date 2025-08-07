#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the node.
 * Return: Height or 0 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor (left height - right height), or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left = height(tree->left);
	int right = height(tree->right);

	return (left - right);
}

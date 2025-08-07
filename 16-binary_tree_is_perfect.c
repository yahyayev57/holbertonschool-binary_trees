#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of tree (distance from root to leaf)
 * @tree: Pointer to the node.
 *
 * Return: Depth (levels count), 0 if NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect_rec - Helper recursive function to check perfectness.
 * @tree: Pointer to current node.
 * @depth: Expected depth of all leaves.
 * @level: Current level in tree.
 *
 * Return: 1 if perfect, 0 if not.
 */
int is_perfect_rec(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	/* Leaf node: check if depth matches */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	/* If internal node and missing child, not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check left and right subtrees */
	return (is_perfect_rec(tree->left, depth, level + 1) &&
		is_perfect_rec(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	/* Get depth of leftmost leaf */
	depth = binary_tree_depth(tree);

	/* Check recursively */
	return (is_perfect_rec(tree, depth, 0));
}

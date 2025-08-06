#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 180);

    root->left = binary_tree_node(root, 50);
    root->right = binary_tree_node(root, 210);

    binary_tree_print(root);
    return (0);
}

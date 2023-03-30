#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: points to the root node to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    binary_tree_is_full(tree->left);
    if (tree->left != NULL && tree->right != NULL)
    {
        binary_tree_is_full(tree->left);
        binary_tree_is_full(tree->right);
        return (1);
    }
    else
        return (0);

    binary_tree_is_full(tree->right);
    if (tree->left != NULL && tree->right != NULL)
    {
        binary_tree_is_full(tree->left);
        binary_tree_is_full(tree->right);
        return (1);
    }
    else
        return (0);
}

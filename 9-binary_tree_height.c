#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: points to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        size_t left_height, right_height;
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        if (left_height > right_height)
            return (left_height + 1);
        else
            return (right_height + 1);
    }    
}

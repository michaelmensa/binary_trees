#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child in a binary
 * tree
 * @tree: points to the root node of the tree to count the number of nodes
 *
 * Description: A NULL pointer is not a node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        nodes += (tree->left || tree->right) ? 1 : 0;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
        return (nodes);
    }
}

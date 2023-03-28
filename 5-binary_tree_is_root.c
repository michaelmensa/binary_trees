#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: points to the node to check
 *
 * Description: if node is NULL, return 0
 *
 * Return: 1 if node is root, 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->parent == NULL)
        return (1);
    else
        return (0);
}

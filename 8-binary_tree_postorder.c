#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using postorder traversal
 * @tree: points to the root node of the tree to traverse
 * @func: points to the function to call for each node. The value must
 * passed as a parameter to this function.
 *
 * Description: if tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    int a;

    if (func == NULL)
        return;
    if (tree != NULL)
    {
        a = tree->n;
        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        (*func)(a);
    }
    else
        return;
}

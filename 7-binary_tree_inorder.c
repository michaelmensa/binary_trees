#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using inorder traversal
 * @tree: points to the root node of the tree to traverse
 * @func: points to the function to call for each node. The value must
 * passed as a parameter to this function.
 *
 * Description: if tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    int a;

    if (func == NULL)
        return;
    if (tree != NULL)
    {
        a = tree->n;
        binary_tree_inorder(tree->left, func);
        (*func)(a);
        binary_tree_inorder(tree->right, func);
    }
    else
        return;
}

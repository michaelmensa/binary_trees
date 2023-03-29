#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a bingary tree
 * using pre-order traversal
 * @tree: points to the root node of the tree to traverse
 * @func: points to the function to call for each node. The value must
 * passed as a parameter to this function.
 *
 * Description: if tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    int a;

    if (tree == NULL || func == NULL)
        return;

    a = tree->n;
    (*func)(a);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}

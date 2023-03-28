#include "binary_trees.h"

/**
 * binary_tree_delete - deletes and entire binary tree
 * @tree: points to the root node of the tree to delete
 *
 * Description: if tree is NULL, do nothing
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}

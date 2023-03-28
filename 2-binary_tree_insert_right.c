#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as right-child
 * of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * if parent has a right-child, the new node must take its place and the
 * old right-child must be set as the right-child of the new node
 *
 * Return: created node or NULL on failure or is parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (parent == NULL)
        return (NULL);

    newnode = binary_tree_node(parent, value);
    if (newnode == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        newnode->right = parent->right;
        parent->right->parent = newnode;
    }
    parent->right = newnode;

    return (newnode);
}

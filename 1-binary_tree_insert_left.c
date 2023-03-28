#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as left-child
 * of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * if parent has a left-child, the new node must take its place and the
 * old left-child must be set as the left-child of the new node
 *
 * Return: created node or NULL on failure or is parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (parent == NULL)
        return (NULL);

    newnode = binary_tree_node(parent, value);
    if (newnode == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        newnode->left = parent->left;
        parent->left->parent = newnode;
    }
    parent->left = newnode;

    return (newnode);
}

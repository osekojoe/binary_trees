#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * If parent already has a right-child, the new node must take its place, and
 * ... the old right-child must be set as the right-child of the new node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 *Return: pointer to the new node or NULL in failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}

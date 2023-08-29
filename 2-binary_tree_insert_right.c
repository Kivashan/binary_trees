#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_insert_right - Creates a new node and inserts new node into
 * right-child of parent node
 * @parent: The parent node
 * @value: The value to store in new node
 *
 * Return: New node on success, NULL otherwise
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *og_right = NULL;

	if (!parent)
		return (NULL);

	og_right = parent->right;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (new && parent->right)
	{
		new->right = og_right;
		og_right->parent = new;
	}
	parent->right = new;

	return (new);
}

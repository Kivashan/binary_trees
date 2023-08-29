#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a new node as a left-child in parent
 * @parent: The parent node of this new node
 * @value: The value stored in the new node
 *
 * Return: new node on success, NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	/* Memory allocation */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new = binary_tree_node(parent, value);

	/**
	 * if new node successfully created and parent node has an existing
	 * left node
	 */
	if (new && parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

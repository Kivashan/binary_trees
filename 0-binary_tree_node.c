#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - Function that creates a binary tree node and returns
 * the new node
 * @parent: The parent node or root node
 * @value: The value to store in the new node
 *
 * Return: The new node on success, NULL otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	/* Memory allocation for new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

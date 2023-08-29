#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_is_root - checks if a node is a root node or not
 * @node: a node from a binary tree structure
 *
 * Return: 1 if node is a root node, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}

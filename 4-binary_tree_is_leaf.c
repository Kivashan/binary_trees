#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf or not
 * @node: a node in a binary tree structure
 *
 * Return: 0 if node is not a leaf, 1 if it is
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}

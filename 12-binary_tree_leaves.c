#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_leaves - counts the number of leaves in a binary
 * tree data structure
 * @tree: the root node of a binary tree data structure
 *
 * Return: The number of leaves in a binary tree data structure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

 	if (!tree)
		return (leaves);

	if (!(tree->left) && !(tree->right))
		return (leaves + 1);

	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);

	return (leaves);
}

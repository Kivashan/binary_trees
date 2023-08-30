#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_size - returns the number of nodes(size) of a 
 * binary tree structure
 * @tree: the root node of a binary tree structure
 *
 * Return: number of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);

	size = binary_tree_size(tree->left) + 1;
	size = size + binary_tree_size(tree->right);

	return (size);
}

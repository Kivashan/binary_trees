#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_nodes - counts the number of nodes that has atleast one child
 * node
 * @tree: a node of a binary tree data structure
 *
 * Return: The number of nodes in a binary tree data structure that has a 
 * child node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);

	if (!(tree->left) && !(tree->right))
		return (0);

	nodes += 1;

	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);

	return (nodes);
}

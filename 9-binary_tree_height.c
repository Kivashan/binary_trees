#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static void traverse_for_height(const binary_tree_t *tree, size_t *h,
								 size_t *max_h);

/**
 * binary_tree_height - a function that returns the height of a binary
 * tree structure
 * @tree: a node from which to begin calculating the height
 *
 * Return: The height from the given node, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;
	size_t max_h = 0;

	if (!tree)
		return (0);

	traverse_for_height(tree, &h, &max_h);

	return (max_h);
}

static void traverse_for_height(const binary_tree_t *tree, size_t *h,
								 size_t *max_h)
{
	if (!tree)
		return;

	/* case where tree is not null and does not have children */
	if (!(tree->left) && !(tree->right))
		return;

	*h += 1;
	if (*h > *max_h)
		*max_h = *h;

	traverse_for_height(tree->left, h, max_h);
	*h -= 1;

	*h += 1;
	traverse_for_height(tree->right, h, max_h);
	*h -= 1;
}

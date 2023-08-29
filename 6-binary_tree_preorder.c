#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_preorder - a function that traverses a binary tree using
 * preorder
 * @tree: the root node in a binary tree structure
 * @func: a pointer to a function that takes an int as a parameter and return
 * is void
 *
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

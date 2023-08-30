#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_postorder - traverses a binary tree structure using the
 * postorder method
 * @tree: the root node of a binary tree structure
 * @func: a pointer to a function that takes an int parameter and
 * returns void
 *
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

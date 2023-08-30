#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_inorder - traverses a binary tree structure using inorder
 * method
 * @tree: the root node in a binary tree structure
 * @func: a pointer to a function that takes an int parameter and returns
 * void
 *
 * Return: None
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

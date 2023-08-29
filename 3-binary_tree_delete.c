#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: binary tree root node
 *
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (!(tree->left) && !(tree->right))
	{
		free(tree);
		return;
	}

	/* delete left child first */
	if (tree->left)
		binary_tree_delete(tree->left);

	/* delete right child */
	if (tree->right)
		binary_tree_delete(tree->right);

	/* delete root node */
	free(tree);
}

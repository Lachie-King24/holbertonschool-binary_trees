#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Use recursion to start at the bottom node starting left */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree-right);

	/* free the child node, and then go back and do it again until tree is gone */
	free(tree);
}

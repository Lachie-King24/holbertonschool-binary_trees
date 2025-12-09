#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of tree
 * Return: amount of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;
	size_t leaves;

	left_leaves = 0;
	right_leaves = 0;
	leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		left_leaves = binary_tree_leaves(tree->left);

	if (tree->right)
		right_leaves = binary_tree_leaves(tree->right);

	leaves = left_leaves + right_leaves;

	return (leaves);
}

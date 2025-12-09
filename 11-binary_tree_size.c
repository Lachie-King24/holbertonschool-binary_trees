#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root of the node of tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t total;

	left_size = 0;
	right_size = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_size = binary_tree_size(tree->left);

	if (tree->right)
		right_size = binary_tree_size(tree->right);

	total = 1 + left_size + right_size;

	return (total);
}

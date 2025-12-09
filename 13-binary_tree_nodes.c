#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to root node of tree
 * Return: count of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t total;

	left_count = 0;
	right_count = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_count = binary_tree_nodes(tree->left);

	if (tree->right)
		right_count = binary_tree_nodes(tree->right);

	total = left_count + right_count;

	if (tree->left || tree-right)
		total += 1;

	return (total);
}

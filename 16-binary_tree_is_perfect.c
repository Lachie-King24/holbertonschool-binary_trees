#include "binary_trees.h"

/**
 * tree_height - calculates the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree, 0 if NULL
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (!tree)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + tree_height(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 * Return: 0 if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h != right_h)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

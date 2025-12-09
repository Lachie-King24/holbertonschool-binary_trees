#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	left_height = 0;
	right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - measures the balance factor of a factory tree
 * @tree: is a pointer to the root of the tree
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)(binary_tree_height(tree->left)
			- binary_tree_height(tree->right)));
}

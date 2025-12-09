#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a factory tree
 * @tree: is a pointer to the root of the tree
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = (int)binary_tree_height(tree->left);

	if (tree->right != NULL) 
		right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}

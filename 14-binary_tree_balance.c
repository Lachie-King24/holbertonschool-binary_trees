#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left;
        size_t right;

        left = 0;
        right = 0;

        if (tree == NULL)
                return (0);

        if (tree->left)
                left = 1 + binary_tree_height(tree->left);

        if (tree->right)
                right = 1 + binary_tree_height(tree->right);

        if (left > right)
                return (left);
        else
                return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a factory tree
 * @tree: is a pointer to the root of the tree
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	left_height = 0;
	right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL) 
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

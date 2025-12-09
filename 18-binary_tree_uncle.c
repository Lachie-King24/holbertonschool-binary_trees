#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left && grandparent->left != parent)
		return (grandparent->left);

	if (grandparent->right && grandparent->right != parent)
		return (grandparent->right);

	return (NULL);
}

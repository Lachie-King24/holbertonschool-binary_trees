#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a tree
 * @tree: pointer to root node of tree
 * Return: depth of node, or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

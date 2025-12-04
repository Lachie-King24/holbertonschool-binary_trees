#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to parent node of inserted node
 * @value: value of the new node
 * Return: address of new node or NULL if fail or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->left)
	{
		temp = parent->left;
		node->left = temp;
		temp->parent = node;
	}
	else
	{
		node->left = NULL;
	}
	node->right = NULL;
	parent->left = node;

	return (node);
}

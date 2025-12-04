#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the parent of the new node
 * @value: value of the new node
 * Return: address of new node or NULL on fail, or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	/* if parent is empty, return NULL */
	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	
	/* set the value for the node and assign it's parent as the given parent */
	node->n = value;
	node->parent = parent;

	/* if node exists par->r asign temp to old set temp to right child of new*/
	/* make new the parent of old node */
	if (parent->right)
	{
		temp = parent->right;
		node->right = temp;
		temp->parent = node;
	}
	/* if it doesn't exist, asign the right child to NULL */
	else
		node->right = NULL;

	/* asign left child of node to NULL, asign the right of the par to new */
	node->left = NULL;
	parent->right = node;

	return (node);
}

#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the node is a root
 * @node: the node that will be checked
 * Return: 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}

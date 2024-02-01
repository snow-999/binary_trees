#include "binary_trees.h"
/**
 * binary_tree_preorder - function  that goes through the tree
 * @tree: tree to go through
 * @func: function to use
 *
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

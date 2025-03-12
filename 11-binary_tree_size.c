#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: pointer to the root of node of the tree to travers
 * Return: Size of the binary tree plus  1
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size + 1);
}

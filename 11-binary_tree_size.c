#include "binary_trees.h"

/**
 * binary_tree_size - measures maximum size of tree
 * @tree: pointer to tree to be measured
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	if (tree == NULL)
		return (0);

	s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	
	return (s);
}

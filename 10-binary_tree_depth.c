#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node
 * @tree: pouinter to the node to measure depth
 * Return: 0 f tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_by_level.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:31:07 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 11:38:31 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Function to free the entire tree
void	free_tree(t_btree *root, void (*free_item)(void *))
{
	if (!root)
		return ;
	free_tree(root->left, free_item);
	free_tree(root->right, free_item);
	free_item(root->item);
	free(root);
}

// Mock application function to apply to each node
void	mock_apply(void *item, int current_level, int is_first_elem)
{
	if (is_first_elem)
		printf("Item: %d, Level: %d, First: %s\n", *(int *)item, current_level,
			"Yes");
	else
		printf("Item: %d, Level: %d, First: %s\n", *(int *)item, current_level,
			"No");
}

// Helper to create and initialize tree nodes
t_btree	*create_node(int value)
{
	int	*item;

	item = (int *)malloc(sizeof(int));
	*item = value;
	return (ft_btree_create_node(item));
}

// Function to free an integer item
void	free_int(void *item)
{
	free(item);
}

// Creating a simple tree
//        10
//       /  \
//      5    15
// Testing function for a simple tree
void	test_apply_by_level_simple_tree(void)
{
	t_btree	*root;

	root = create_node(10);
	root->left = create_node(5);
	root->right = create_node(15);

	printf("Test simple tree:\n");
	ft_btree_apply_by_level(root, mock_apply);

	free_tree(root, free_int);
}
// Creating a more complex tree
//        20
//       /  \
//      10   30
//     / \   /
//    5  15 25
// Testing function for a more complex tree
void	test_apply_by_level_complex_tree(void)
{
	t_btree	*root;

	root = create_node(20);
	root->left = create_node(10);
	root->right = create_node(30);
	root->left->left = create_node(5);
	root->left->right = create_node(15);
	root->right->left = create_node(25);

	printf("Test complex tree:\n");
	ft_btree_apply_by_level(root, mock_apply);

	free_tree(root, free_int);
}

int	main(void)
{
	test_apply_by_level_simple_tree();
	test_apply_by_level_complex_tree();

	printf("All tests passed\n");
	return (0);
}



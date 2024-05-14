/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_suffix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:23:35 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 12:58:12 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

#define MAX_ITEMS 100

static int	g_test_results[MAX_ITEMS];
static int	g_test_count;

// Mock application function to apply to each node
void	mock_apply(void *item)
{
	if (g_test_count < MAX_ITEMS)
	{
		g_test_results[g_test_count++] = *(int *)item;
	}
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

void	reset_test_results(void)
{
	g_test_count = 0;
}

// Creating a simple tree
//        10
//       /  \
//      5    15
// Testing function for a simple tree
void	test_apply_suffix_simple_tree(void)
{
	t_btree	*root;

	reset_test_results();
	root = create_node(10);
	root->left = create_node(5);
	root->right = create_node(15);

	ft_btree_apply_suffix(root, mock_apply);

	assert(g_test_count == 3);
	assert(g_test_results[0] == 5);
	assert(g_test_results[1] == 15);
	assert(g_test_results[2] == 10);

	printf("test_apply_suffix_simple_tree: OK\n");
	free_tree(root, free_int);
}

// Creating a more complex tree
//        20
//       /  \
//      10   30
//     / \   /
//    5  15 25
// Testing function for a more complex tree
void	test_apply_suffix_complex_tree()
{
	t_btree	*root;

	reset_test_results();
	root = create_node(20);
	root->left = create_node(10);
	root->right = create_node(30);
	root->left->left = create_node(5);
	root->left->right = create_node(15);
	root->right->left = create_node(25);

	ft_btree_apply_suffix(root, mock_apply);

	assert(g_test_count == 6);
	assert(g_test_results[0] == 5);
	assert(g_test_results[1] == 15);
	assert(g_test_results[2] == 10);
	assert(g_test_results[3] == 25);
	assert(g_test_results[4] == 30);
	assert(g_test_results[5] == 20);

	printf("test_apply_suffix_complex_tree: OK\n");
	free_tree(root, free_int);
}

int	main(void)
{
	test_apply_suffix_simple_tree();
	test_apply_suffix_complex_tree();

	printf("All tests passed!\n");
	return (0);
}

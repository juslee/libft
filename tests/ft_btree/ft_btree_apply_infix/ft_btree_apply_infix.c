/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:27:24 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 12:43:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

#define MAX_ITEMS 100

static int	g_test_results[MAX_ITEMS];
static int	g_test_count;

void	mock_apply(void *item)
{
	if (g_test_count < MAX_ITEMS)
	{
		g_test_results[g_test_count++] = *(int *)item;
	}
}

t_btree	*create_node(int value)
{
	int	*item;

	item = (int *)malloc(sizeof(int));
	*item = value;
	return (ft_btree_create_node(item));
}

void	free_int(void *item)
{
	free(item);
}

void	free_tree(t_btree *root)
{
	if (!root)
		return;
	free_tree(root->left);
	free_tree(root->right);
	free_int(root->item);
	free(root);
}

void	reset_test_results(void)
{
	g_test_count = 0;
}

void	test_apply_infix_simple_tree(void)
{
	t_btree	*root;

	reset_test_results();
	root = create_node(10);
	root->left = create_node(5);
	root->right = create_node(20);

	ft_btree_apply_infix(root, mock_apply);

	assert(g_test_count == 3);
	assert(g_test_results[0] == 5);
	assert(g_test_results[1] == 10);
	assert(g_test_results[2] == 20);

	printf("test_apply_infix_simple_tree: OK\n");
	free_tree(root);
}

void	test_apply_infix_complex_tree()
{
	t_btree	*root;

	reset_test_results();
	root = create_node(40);
	root->left = create_node(20);
	root->right = create_node(60);
	root->left->left = create_node(10);
	root->left->right = create_node(30);
	root->right->right = create_node(80);

	ft_btree_apply_infix(root, mock_apply);
	assert(g_test_count == 6);
	assert(g_test_results[0] == 10);
	assert(g_test_results[1] == 20);
	assert(g_test_results[2] == 30);
	assert(g_test_results[3] == 40);
	assert(g_test_results[4] == 60);
	assert(g_test_results[5] == 80);

	printf("test_apply_infix_complex_tree: OK\n");
	free_tree(root);
}

int	main(void)
{
	test_apply_infix_simple_tree();
	test_apply_infix_complex_tree();

	printf("All tests passed!\n");
	return (0);
}

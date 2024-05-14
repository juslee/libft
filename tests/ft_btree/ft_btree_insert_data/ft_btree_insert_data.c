/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:55:35 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 11:03:26 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Comparison function for integers
int	int_cmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

// Function to free a binary tree
void	free_tree(t_btree *root)
{
	if (root == NULL)
		return ;
	free_tree(root->left);
	free_tree(root->right);
	free(root);
}

// Test insertion into an empty tree
void	test_insert_empty(void)
{
	t_btree	*root;
	int		item;

	root = NULL;
	item = 42;
	ft_btree_insert_data(&root, &item, int_cmp);
	assert(root != NULL && *(int *)(root->item) == 42);
	printf("test_insert_empty: OK\n");
	free_tree(root);
}

// Test insertion to form a left-heavy tree
void	test_insert_left_heavy(void)
{
	t_btree	*root;
	int		items[3];
	int		i;

	root = NULL;
	items[0] = 50;
	items[1] = 40;
	items[2] = 30;
	i = 0;
	while (i < 3)
	{
		ft_btree_insert_data(&root, &items[i], int_cmp);
		i++;
	}
	assert(root != NULL && *(int *)(root->item) == 50);
	assert(root->left != NULL && *(int *)(root->left->item) == 40);
	assert(root->left->left != NULL && *(int *)(root->left->left->item) == 30);
	printf("test_insert_left_heavy: OK\n");
	free_tree(root);
}

// Test insertion to form a right-heavy tree
void	test_insert_right_heavy(void)
{
	t_btree	*root;
	int		items[3];
	int		i;

	root = NULL;
	items[0] = 30;
	items[1] = 40;
	items[2] = 50;
	i = 0;
	while (i < 3)
	{
		ft_btree_insert_data(&root, &items[i], int_cmp);
		i++;
	}
	assert(root != NULL && *(int *)(root->item) == 30);
	assert(root->right != NULL && *(int *)(root->right->item) == 40);
	assert(root->right->right != NULL
		&& *(int *)(root->right->right->item) == 50);
	printf("test_insert_right_heavy: OK\n");
	free_tree(root);
}

int	main(void)
{
	test_insert_empty();
	test_insert_left_heavy();
	test_insert_right_heavy();

	printf("All tests passed!\n");
	return (0);
}

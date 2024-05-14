/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:05:57 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 11:12:17 by welee            ###   ########.fr       */
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

// Test search in a populated tree
void	test_search_found(void)
{
	t_btree	*root;
	int		items[5];
	int		search_item;
	int		i;
	t_btree	*found;

	root = NULL;
	items[0] = 40;
	items[1] = 20;
	items[2] = 60;
	items[3] = 10;
	items[4] = 30;
	search_item = 20;
	i = 0;
	while (i < 5)
		ft_btree_insert_data(&root, &items[i++], int_cmp);
	found = ft_btree_search_item(root, &search_item, int_cmp);
	assert(found != NULL && *(int *)(found->item) == 20);
	printf("test_search_found: OK\n");
	free_tree(root);
}

// Test search for an item not present in the tree
void	test_search_not_found(void)
{
	t_btree	*root;
	int		items[5];
	int		search_item;
	int		i;
	t_btree	*found;

	root = NULL;
	items[0] = 40;
	items[1] = 20;
	items[2] = 60;
	items[3] = 10;
	items[4] = 30;
	search_item = 50;
	i = 0;
	while (i < 5)
		ft_btree_insert_data(&root, &items[i++], int_cmp);
	found = ft_btree_search_item(root, &search_item, int_cmp);
	assert(found == NULL);
	printf("test_search_not_found: OK\n");
	free_tree(root);
}

// Test search in an empty tree
void	test_search_empty(void)
{
	t_btree	*root;
	int		search_item;
	t_btree	*found;

	root = NULL;
	search_item = 42;
	found = ft_btree_search_item(root, &search_item, int_cmp);
	assert(found == NULL);
	printf("test_search_empty: OK\n");
}

int	main(void)
{
	test_search_found();
	test_search_not_found();
	test_search_empty();
	return (0);
}

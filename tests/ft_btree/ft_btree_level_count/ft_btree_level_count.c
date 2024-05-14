/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:13:28 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 11:30:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Function to create a new binary tree node
t_btree	*ft_btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
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

// Test count on an empty tree
void	test_level_count_empty(void)
{
	t_btree	*root;

	root = NULL;
	assert(ft_btree_level_count(root) == 0);
	printf("test_level_count_empty: OK\n");
}

// Test count on a tree with a single node
void	test_level_count_one_node(void)
{
	t_btree	*root;

	root = ft_btree_create_node(NULL);
	assert(ft_btree_level_count(root) == 1);
	printf("test_level_count_one_node: OK\n");
	free_tree(root);
}

// Test count on a left-heavy tree
void	test_level_count_left_heavy(void)
{
	t_btree	*root;

	root = ft_btree_create_node(NULL);
	root->left = ft_btree_create_node(NULL);
	root->left->left = ft_btree_create_node(NULL);

	assert(ft_btree_level_count(root) == 3);
	printf("test_level_count_left_heavy: OK\n");
	free_tree(root);
}

// Test count on a right-heavy tree
void	test_level_count_right_heavy(void)
{
	t_btree	*root;

	root = ft_btree_create_node(NULL);
	root->right = ft_btree_create_node(NULL);
	root->right->right = ft_btree_create_node(NULL);

	assert(ft_btree_level_count(root) == 3);
	printf("test_level_count_right_heavy: OK\n");
	free_tree(root);
}

// Test count on a balanced tree
void	test_level_count_balanced(void)
{
	t_btree	*root;

	root = ft_btree_create_node(NULL);
	root->left = ft_btree_create_node(NULL);
	root->right = ft_btree_create_node(NULL);
	root->left->left = ft_btree_create_node(NULL);
	root->right->right = ft_btree_create_node(NULL);

	assert(ft_btree_level_count(root) == 3);
	printf("test_level_count_balanced: OK\n");
	free_tree(root);
}

int	main(void)
{
	test_level_count_empty();
	test_level_count_one_node();
	test_level_count_left_heavy();
	test_level_count_right_heavy();
	test_level_count_balanced();

	printf("All tests passed\n");
	return (0);
}

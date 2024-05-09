/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:14:33 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:46 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_insert_data.c
 * @brief Insert a new node into a binary tree
 */

#include "libft.h"

/**
 * @brief Insert a new node into a binary tree
 * @param root pointer to the root node of the binary tree
 * @param item pointer to the data to insert
 * @param cmp pointer to the comparison function
 */
void	ft_btree_insert_data(t_btree **root, void *item,
	int (*cmp)(void *, void *))
{
	t_btree	*node;

	if (!root)
		return ;
	if (!*root)
	{
		*root = ft_btree_create_node(item);
		return ;
	}
	node = *root;
	if (cmp(item, node->item) < 0)
	{
		if (node->left)
			ft_btree_insert_data(&node->left, item, cmp);
		else
			node->left = ft_btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmp);
		else
			node->right = btree_create_node(item);
	}
}

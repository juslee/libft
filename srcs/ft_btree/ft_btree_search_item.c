/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:16:06 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:17:09 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_search_item.c
 * @brief Search for an item in a binary tree
 */

#include "libft.h"

/**
 * @brief Search for an item in a binary tree
 * @param root pointer to the root node of the binary tree
 * @param data_ref pointer to the data to search for
 * @param cmp pointer to the comparison function
 * @return t_btree* pointer to the node containing the data
 */
t_btree	*ft_btree_search_item(t_btree *root, void *data_ref,
	int (*cmp)(void *, void *))
{
	t_btree	*node;

	if (!root)
		return (NULL);
	node = root;
	if (cmp(data_ref, node->item) < 0)
		return (ft_btree_search_item(node->left, data_ref, cmp));
	else if (cmp(data_ref, node->item) > 0)
		return (ft_btree_search_item(node->right, data_ref, cmp));
	return (node);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:08:40 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:31 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_create_node.c
 * @brief Create a new node for binary tree
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Create a new node for binary tree
 * @param item pointer to the data
 * @return t_btree* pointer to the new node
 */
t_btree	*ft_btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if (!node)
		return (0);
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}

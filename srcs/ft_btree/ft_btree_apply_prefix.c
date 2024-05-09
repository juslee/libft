/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:09:56 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:15 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_apply_prefix.c)
 * @brief Apply a function to each node in a binary tree in prefix order
 */

#include "libft.h"

/**
 * @brief Apply a function to each node in a binary tree in prefix order
 * @param root pointer to the root node of the binary tree
 * @param applyf pointer to the function to apply to each node
 */
void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	applyf(root->item);
	ft_btree_apply_prefix(root->left, applyf);
	ft_btree_apply_prefix(root->right, applyf);
}

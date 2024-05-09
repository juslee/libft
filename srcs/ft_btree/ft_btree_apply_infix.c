/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:12:46 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_apply_infix.c
 * @brief Apply a function to each node in a binary tree in infix order
 */

#include "libft.h"

/**
 * @brief Apply a function to each node in a binary tree in infix order
 * @param root pointer to the root node of the binary tree
 * @param applyf pointer to the function to apply to each node
 */
void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	ft_btree_apply_infix(root->left, applyf);
	applyf(root->item);
	ft_btree_apply_infix(root->right, applyf);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_suffix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:13:30 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:26 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_apply_suffix.c
 * @brief Apply a function to each node in a binary tree in suffix order
 */

#include "libft.h"

/**
 * @brief Apply a function to each node in a binary tree in suffix order
 * @param root pointer to the root node of the binary tree
 * @param applyf pointer to the function to apply to each node
 */
void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	ft_btree_apply_suffix(root->left, applyf);
	ft_btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

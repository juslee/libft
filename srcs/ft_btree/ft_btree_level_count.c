/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:17:50 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:16:57 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_level_count.c
 * @brief Count the number of levels in a binary tree
 */

#include "libft.h"

/**
 * @brief Count the number of levels in a binary tree
 * @param root pointer to the root node of the binary tree
 * @return int the number of levels in the binary tree
 */
int	ft_btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = ft_btree_level_count(root->left);
	right = ft_btree_level_count(root->right);
	return (1 + *(int *)ft_ternary(left > right, &left, &right));
}

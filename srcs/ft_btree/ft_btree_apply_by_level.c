/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_by_level.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:20:05 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:15:45 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_apply_by_level.c
 * @brief Apply a function to each node of a binary tree by level
 */

#include "libft.h"

/**
 * @brief Free the content of a node
 * @param content pointer to the content to free
 */
void	free_content_function(void *content)
{
	free(content);
}

/**
 * @brief Apply a function to each node of a binary tree by level
 * @param root pointer to the root node of the binary tree
 * @param apply pointer to the function to apply to each node
 */
void	ft_btree_apply_by_level(t_btree *root,
	void (*apply)(void *item, int current_level, int is_first_elem))
{
	t_queue	*queue;
	t_btree	*node;
	int		current_level;
	int		is_first_elem;

	if (!root || !apply)
		return ;
	queue = ft_queue_init(-1);
	ft_queue_enqueue(queue, root);
	current_level = 0;
	while (!ft_queue_is_empty(queue))
	{
		is_first_elem = 1;
		while (queue->size > 0)
		{
			node = ft_queue_dequeue(queue);
			apply(node->item, current_level, is_first_elem);
			if (node->left)
				ft_queue_enqueue(queue, node->left);
			if (node->right)
				ft_queue_enqueue(queue, node->right);
			is_first_elem = 0;
		}
		current_level++;
	}
	ft_queue_clear(queue, free_content_function);
}

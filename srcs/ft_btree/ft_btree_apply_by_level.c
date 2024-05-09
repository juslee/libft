/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_by_level.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:20:05 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:56:29 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file btree_apply_by_level.c
 * @brief Apply a function to each node of a binary tree by level
 */

#include "libft.h"

/**
 * @brief Process a single node and manage its children in the queue
 * @param queue queue containing the nodes of the current level
 * @param apply pointer to the function to apply
 * @param current_level current level of the binary tree
 * @param is_first_elem flag to indicate if the node is the first element of
 * the level
 */
void	process_node(t_queue *queue,
	void (*apply)(void *, int, int),
	int current_level,
	int is_first_elem)
{
	t_btree	*node;

	node = ft_queue_dequeue(queue);
	apply(node->item, current_level, is_first_elem);
	if (node->left)
		ft_queue_enqueue(queue, node->left);
	if (node->right)
		ft_queue_enqueue(queue, node->right);
}

/**
 * @brief Process a level of a binary tree
 * @param queue queue containing the nodes of the current level
 * @param apply pointer to the function to apply
 * @param current_level current level of the binary tree
 */
void	process_level(t_queue *queue,
	void (*apply)(void *, int, int),
	int current_level)
{
	int	level_size;
	int	i;

	level_size = queue->size;
	i = 0;
	while (i < level_size)
	{
		process_node(queue, apply, current_level, i == 0);
		i++;
	}
}

/**
 * @brief Apply a function to each node of a binary tree by level
 * @param root pointer to the root node of the binary tree
 * @param apply pointer to the function to apply
 */
void	ft_btree_apply_by_level(t_btree *root, void (*apply)(void *, int, int))
{
	t_queue	*queue;
	int		current_level;

	if (!root || !apply)
		return ;
	queue = ft_queue_init(-1);
	ft_queue_enqueue(queue, root);
	current_level = 0;
	while (!ft_queue_is_empty(queue))
	{
		process_level(queue, apply, current_level);
		current_level++;
	}
	ft_queue_clear(queue, free);
}

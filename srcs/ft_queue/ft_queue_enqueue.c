/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:35:43 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 13:13:57 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_enqueue.c
 * @brief Adds an element to the end of the queue.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Adds an element to the end of the queue.
 * @param queue The queue to add to
 * @param content The content to add
 * @return 0 on success, -1 on failure
 * @note If the queue has a maximum size set and the size of the queue is equal
 * to the maximum size, the function will fail.
*/
int	ft_queue_enqueue(t_queue *queue, void *content)
{
	t_list	*new_node;

	if (queue->max_size >= 0 && queue->size >= (size_t)queue->max_size)
		return (-1);
	new_node = ft_lstnew(content);
	if (new_node == NULL)
		return (-1);
	if (new_node->content == NULL)
	{
		free(new_node);
		return (-1);
	}
	if (queue->rear == NULL)
	{
		queue->front = new_node;
		queue->rear = new_node;
	}
	else
	{
		queue->rear->next = new_node;
		queue->rear = new_node;
	}
	queue->size++;
	return (0);
}

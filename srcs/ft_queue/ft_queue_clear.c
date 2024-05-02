/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:20:30 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 11:53:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_clear.c
 * @brief Clears the queue and frees the memory of the queue's elements.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Clears the queue and frees the memory of the queue's elements.
 * @param queue The queue to clear
 * @param free_content The function used to free the content of the queue's
 * elements
 */
void	ft_queue_clear(t_queue *queue, void (*free_content)(void *))
{
	t_list	*temp;

	while (queue->front != NULL)
	{
		temp = queue->front;
		queue->front = queue->front->next;
		if (free_content != NULL)
			free_content(temp->content);
		free(temp);
	}
	queue->rear = NULL;
	queue->size = 0;
}

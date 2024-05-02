/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_dequeue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:04:19 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 12:21:12 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_dequeue.c
 * @brief Removes an element from the front of the queue.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Removes an element from the front of the queue.
 * @param queue The queue to remove from
 * @return The content of the removed element
 * @note If the queue is empty, the function will return NULL.
 * @note The function will free the memory of the removed element.
 * @note The function will update the front of the queue to the next element.
 * @note If the front of the queue is NULL, the rear of the queue will also be
 * updated to NULL.
*/
void	*ft_queue_dequeue(t_queue *queue)
{
	t_list	*temp;
	void	*content;

	if (queue->front == NULL)
		return (NULL);
	temp = queue->front;
	content = temp->content;
	queue->front = queue->front->next;
	if (queue->front == NULL)
		queue->rear = NULL;
	free(temp);
	queue->size--;
	return (content);
}

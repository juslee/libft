/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:57:24 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 14:36:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_init.c
 * @brief Allocates and returns a new queue. The variables 'front' and 'rear'
 * are initialized to NULL.
 */

#include "libft.h"

/**
 * @brief Allocates and returns a new queue. The variables 'front' and 'rear'
 * are initialized to NULL.
 * @param max_size The maximum size of the queue. If the maximum size is less
 * than 0, the queue will have no maximum size.
 * @return A pointer to the new queue, or NULL if the allocation fails.
 */
t_queue	*ft_queue_init(ssize_t max_size)
{
	t_queue	*queue;

	queue = (t_queue *)malloc(sizeof(t_queue));
	queue->front = NULL;
	queue->rear = NULL;
	queue->size = 0;
	queue->max_size = max_size;
	return (queue);
}

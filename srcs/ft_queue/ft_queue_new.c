/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:57:24 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 11:24:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_new.c
 * @brief Allocates and returns a new queue. The variables 'front' and 'rear'
 * are initialized to NULL.
 */

#include "libft.h"

/**
 * @brief Allocates and returns a new queue. The variables 'front' and 'rear'
 * are initialized to NULL.
 * @param queue The queue to initialize
 * @param max_size The maximum size of the queue. If the maximum size is less
 * than 0, the queue will have no maximum size.
 */
void	ft_queue_new(t_queue *queue, ssize_t max_size)
{
	queue->front = NULL;
	queue->rear = NULL;
	queue->size = 0;
	queue->max_size = max_size;
}

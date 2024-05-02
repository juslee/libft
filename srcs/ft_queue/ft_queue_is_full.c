/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_is_full.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:18:34 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 11:50:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_is_full.c
 * @brief Returns whether the queue is full.
 */

#include "libft.h"

/**
 * @brief Returns whether the queue is full.
 * @param queue The queue to check
 * @return 1 if the queue is full, 0 otherwise
 */
int	ft_queue_is_full(t_queue *queue)
{
	return (queue->max_size >= 0 && queue->size >= (size_t)queue->max_size);
}

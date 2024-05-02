/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:17:09 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 11:17:31 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_queue_is_empty.c
 * @brief Returns whether the queue is empty.
 */

#include "libft.h"

/**
 * @brief Returns whether the queue is empty.
 * @param queue The queue to check
 * @return 1 if the queue is empty, 0 otherwise
 */
int	ft_queue_is_empty(t_queue *queue)
{
	return (queue->front == NULL);
}

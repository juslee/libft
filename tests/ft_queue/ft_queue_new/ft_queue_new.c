/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:30:08 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 11:34:05 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

// Test with a positive max_size
void	test_queue_new_positive_size(void)
{
	t_queue	queue;

	ft_queue_new(&queue, 10);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	assert(queue.max_size == 10);
	printf("Test with positive max_size passed.\n");
}

// Test with zero max_size
void	test_queue_new_zero_size(void)
{
	t_queue	queue;

	ft_queue_new(&queue, 0);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	assert(queue.max_size == 0);
	printf("Test with zero max_size passed.\n");
}

// Test with a negative max_size (unlimited size)
void	test_queue_new_negative_size(void)
{
	t_queue	queue;

	ft_queue_new(&queue, -1);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	assert(queue.max_size == -1);
	printf("Test with negative max_size passed.\n");
}

int	main(void)
{
	test_queue_new_positive_size();
	test_queue_new_zero_size();
	test_queue_new_negative_size();

	printf("All tests passed.\n");
	return (0);
}

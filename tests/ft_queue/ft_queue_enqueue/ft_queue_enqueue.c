/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:39:51 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:04:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Test enqueue on empty queue
void	test_enqueue_empty_queue(void)
{
	t_queue	*queue;
	int		value;

	value = 5;
	queue = ft_queue_init(-1);
	assert(ft_queue_enqueue(queue, &value) == 0);
	assert(queue->front != NULL);
	assert(queue->rear != NULL);
	assert(queue->front == queue->rear);
	assert(queue->size == 1);
	assert(*(int *)queue->front->content == 5);
	printf("Test enqueue on empty queue passed.\n");
}

// Test enqueue on non-empty queue
void	test_enqueue_non_empty_queue(void)
{
	t_queue	*queue;
	int		value1;
	int		value2;

	value1 = 5;
	value2 = 10;
	queue = ft_queue_init(-1);
	ft_queue_enqueue(queue, &value1);
	assert(ft_queue_enqueue(queue, &value2) == 0);
	assert(queue->front != NULL);
	assert(queue->rear != NULL);
	assert(queue->front != queue->rear);
	assert(queue->size == 2);
	assert(*(int *)queue->front->content == 5);
	assert(*(int *)queue->rear->content == 10);
	printf("Test enqueue on non-empty queue passed.\n");
}

// Test enqueue on full queue
void	test_enqueue_full_queue(void)
{
	t_queue	*queue;
	int		value;

	value = 5;
	queue = ft_queue_init(1);
	ft_queue_enqueue(queue, &value);
	assert(ft_queue_enqueue(queue, &value) == -1);
	assert(queue->front != NULL);
	assert(queue->rear != NULL);
	assert(queue->front == queue->rear);
	assert(queue->size == 1);
	assert(*(int *)queue->front->content == 5);
	printf("Test enqueue on full queue passed.\n");
}

// Test enqueue with memory failure simulation
void	test_enqueue_memory_failure(void)
{
	t_queue	*queue;
	int		value;

	value = 5;
	queue = ft_queue_init(-1);
	assert(ft_queue_enqueue(queue, &value) == 0);
	assert(queue->front != NULL);
	assert(queue->rear != NULL);
	assert(queue->front == queue->rear);
	assert(queue->size == 1);
	assert(*(int *)queue->front->content == 5);

	assert(ft_queue_enqueue(queue, NULL) == -1);
	assert(queue->front != NULL);
	assert(queue->rear != NULL);
	assert(queue->front == queue->rear);
	assert(queue->size == 1);
	assert(*(int *)queue->front->content == 5);
	printf("Test enqueue with memory failure passed.\n");
}

// Main function to run the tests
int	main(void)
{
	test_enqueue_empty_queue();
	test_enqueue_non_empty_queue();
	test_enqueue_full_queue();
	test_enqueue_memory_failure();

	printf("All tests passed!\n");
	return (0);
}

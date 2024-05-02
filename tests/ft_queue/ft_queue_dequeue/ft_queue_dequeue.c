/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_dequeue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:06:27 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 12:18:13 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Helper function to enqueue data
void	enqueue_data(t_queue *queue, int *data, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_queue_enqueue(queue, &data[i]);
		i++;
	}
}

// Test dequeue on empty queue
void	test_dequeue_empty_queue(void)
{
	t_queue	queue;

	ft_queue_new(&queue, -1);
	assert(ft_queue_dequeue(&queue) == NULL);
	printf("Test dequeue on empty queue passed.\n");
}

// Test dequeue the only element in the queue
void	test_dequeue_single_element(void)
{
	t_queue	queue;
	int		value;

	value = 5;
	ft_queue_new(&queue, -1);
	ft_queue_enqueue(&queue, &value);
	assert(*(int *)ft_queue_dequeue(&queue) == 5);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	printf("Test dequeue the only element in the queue passed.\n");
}

// Test dequeue reduces the queue size correctly
void	test_dequeue_reduces_size(void)
{
	t_queue	queue;
	int		data[5] = {5, 10, 15, 20, 25};

	ft_queue_new(&queue, -1);
	enqueue_data(&queue, data, 5);
	ft_queue_dequeue(&queue);
	assert(queue.size == 4);
	ft_queue_dequeue(&queue);
	assert(queue.size == 3);
	ft_queue_dequeue(&queue);
	assert(queue.size == 2);
	ft_queue_dequeue(&queue);
	assert(queue.size == 1);
	ft_queue_dequeue(&queue);
	assert(queue.size == 0);
	printf("Test dequeue reduces the queue size correctly passed.\n");
}

// Test dequeue maintains the order of elements
void	test_dequeue_maintains_order(void)
{
	t_queue	queue;
	int		data[5] = {5, 10, 15, 20, 25};

	ft_queue_new(&queue, -1);
	enqueue_data(&queue, data, 5);
	assert(*(int *)ft_queue_dequeue(&queue) == 5);
	assert(*(int *)ft_queue_dequeue(&queue) == 10);
	assert(*(int *)ft_queue_dequeue(&queue) == 15);
	assert(*(int *)ft_queue_dequeue(&queue) == 20);
	assert(*(int *)ft_queue_dequeue(&queue) == 25);
	printf("Test dequeue maintains the order of elements passed.\n");
}

// Test consecutive enqueue and dequeue
void	test_consecutive_enqueue_dequeue(void)
{
	t_queue	queue;
	int		data[5] = {5, 10, 15, 20, 25};

	ft_queue_new(&queue, -1);
	enqueue_data(&queue, data, 5);
	assert(*(int *)ft_queue_dequeue(&queue) == 5);
	assert(*(int *)ft_queue_dequeue(&queue) == 10);
	ft_queue_enqueue(&queue, &data[0]);
	ft_queue_enqueue(&queue, &data[1]);
	assert(*(int *)ft_queue_dequeue(&queue) == 15);
	assert(*(int *)ft_queue_dequeue(&queue) == 20);
	assert(*(int *)ft_queue_dequeue(&queue) == 25);
	assert(*(int *)ft_queue_dequeue(&queue) == 5);
	assert(*(int *)ft_queue_dequeue(&queue) == 10);
	printf("Test consecutive enqueue and dequeue passed.\n");
}

int	main(void)
{
	test_dequeue_empty_queue();
	test_dequeue_single_element();
	test_dequeue_reduces_size();
	test_dequeue_maintains_order();
	test_consecutive_enqueue_dequeue();

	printf("All tests passed.\n");
	return (0);
}

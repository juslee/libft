/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:32:35 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 12:38:24 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Helper function to free content
void	free_content_function(void *content)
{
	free(content);
}

// Test clear on empty queue
void	test_clear_empty_queue(void)
{
	t_queue	queue;

	ft_queue_new(&queue, -1);
	ft_queue_clear(&queue, free_content_function);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	printf("Test clear on empty queue passed.\n");
}

// Test clear on non-empty queue
void	test_clear_non_empty_queue(void)
{
	t_queue	queue;
	int		*value1;
	int		*value2;

	value1 = (int *)malloc(sizeof(int));
	value2 = (int *)malloc(sizeof(int));
	*value1 = 5;
	*value2 = 10;
	ft_queue_new(&queue, -1);
	ft_queue_enqueue(&queue, value1);
	ft_queue_enqueue(&queue, value2);
	ft_queue_clear(&queue, free_content_function);
	assert(queue.front == NULL);
	assert(queue.rear == NULL);
	assert(queue.size == 0);
	printf("Test clear on non-empty queue passed.\n");
}

int	main(void)
{
	test_clear_empty_queue();
	test_clear_non_empty_queue();

	printf("All tests passed.\n");
	return (0);
}

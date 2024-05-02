/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:22:52 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 12:29:41 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Test is_empty on empty queue
void	test_is_empty_empty_queue(void)
{
	t_queue	queue;

	ft_queue_new(&queue, -1);
	assert(ft_queue_is_empty(&queue) == 1);
	printf("Test is_empty on empty queue passed.\n");
}

// Test is_empty on non-empty queue
void	test_is_empty_non_empty_queue(void)
{
	t_queue	queue;
	int		value;

	value = 5;
	ft_queue_new(&queue, -1);
	ft_queue_enqueue(&queue, &value);
	assert(ft_queue_is_empty(&queue) == 0);
	printf("Test is_empty on non-empty queue passed.\n");
}

int	main(void)
{
	test_is_empty_empty_queue();
	test_is_empty_non_empty_queue();

	printf("All tests passed.\n");
	return (0);
}

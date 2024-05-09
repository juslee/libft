/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_is_full.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:31:22 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 14:53:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Test is_full on empty queue
void	test_is_full_empty_queue(void)
{
	t_queue	*queue;

	queue = ft_queue_init(0);
	assert(ft_queue_is_full(queue) == 1);
	printf("Test is_full on empty queue passed.\n");
}

// Test is_full on non-empty queue
void	test_is_full_non_empty_queue(void)
{
	t_queue	*queue;
	int		value;

	value = 5;
	queue = ft_queue_init(1);
	ft_queue_enqueue(queue, &value);
	assert(ft_queue_is_full(queue) == 1);
	printf("Test is_full on non-empty queue passed.\n");
}

int	main(void)
{
	test_is_full_empty_queue();
	test_is_full_non_empty_queue();

	printf("All tests passed.\n");
	return (0);
}

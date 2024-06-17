/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:02:19 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 14:03:19 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_top_with_empty_stack(void)
{
	t_stack	*stack;
	void	*top_data;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	top_data = ft_stack_top(stack);
	assert(top_data == NULL && "Top data should be NULL for empty stack");
	ft_stack_clear(stack);
	free(stack);
	printf("test_ft_stack_top_with_empty_stack passed\n");
}

void	test_ft_stack_top_with_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;
	int		element3;
	void	*top_data;

	element1 = 1;
	element2 = 2;
	element3 = 3;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	top_data = ft_stack_top(stack);
	assert(top_data != NULL
		&& "Top data should not be NULL for non-empty stack");
	assert(*(int *)top_data == element1
		&& "Top data should be the first element (element1)");
	ft_stack_push(stack, &element2);
	top_data = ft_stack_top(stack);
	assert(top_data != NULL
		&& "Top data should not be NULL for non-empty stack");
	assert(*(int *)top_data == element2
		&& "Top data should be the second element (element2)");
	ft_stack_push(stack, &element3);
	top_data = ft_stack_top(stack);
	assert(top_data != NULL
		&& "Top data should not be NULL for non-empty stack");
	assert(*(int *)top_data == element3
		&& "Top data should be the third element (element3)");
	ft_stack_clear(stack);
	free(stack);
	printf("test_ft_stack_top_with_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_top_with_empty_stack();
	test_ft_stack_top_with_non_empty_stack();
	printf("All tests passed for ft_stack_top\n");
	return (0);
}

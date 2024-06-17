/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:23:47 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:43:17 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_clear_empty_stack(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_clear(stack);
	assert(stack->size == 0
		&& "Stack size is not zero after clearing empty stack");
	assert(stack->top == NULL
		&& "Stack top is not NULL after clearing empty stack");
	free(stack);
	printf("test_ft_stack_clear_empty_stack passed\n");
}

void	test_ft_stack_clear_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;
	int		element3;

	element1 = 1;
	element2 = 2;
	element3 = 3;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	ft_stack_push(stack, &element2);
	ft_stack_push(stack, &element3);
	ft_stack_clear(stack);
	assert(stack->size == 0
		&& "Stack size is not zero after clearing non-empty stack");
	assert(stack->top == NULL
		&& "Stack top is not NULL after clearing non-empty stack");
	free(stack);
	printf("test_ft_stack_clear_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_clear_empty_stack();
	test_ft_stack_clear_non_empty_stack();
	printf("All tests passed for ft_stack_clear\n");
	return (0);
}

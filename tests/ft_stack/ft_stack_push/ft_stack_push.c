/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:58:13 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 17:00:01 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_push_with_valid_data(void)
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
	assert(ft_stack_push(stack, &element1) == 1
		&& "Failed to push element1 onto stack");
	assert(stack->size == 1 && "Stack size should be 1 after one push");
	assert(*(int *)stack->top->content == element1
		&& "Top element should be element1");
	assert(ft_stack_push(stack, &element2) == 1
		&& "Failed to push element2 onto stack");
	assert(stack->size == 2 && "Stack size should be 2 after two pushes");
	assert(*(int *)stack->top->content == element2
		&& "Top element should be element2");
	assert(ft_stack_push(stack, &element3) == 1
		&& "Failed to push element3 onto stack");
	assert(stack->size == 3 && "Stack size should be 3 after three pushes");
	assert(*(int *)stack->top->content == element3
		&& "Top element should be element3");
	ft_stack_clear(stack);
	printf("test_ft_stack_push_with_valid_data passed\n");
}

void	test_ft_stack_push_with_null_stack(void)
{
	int		element;
	int		result;

	element = 1;
	result = ft_stack_push(NULL, &element);
	assert(result == 0 && "Pushing to NULL stack should return 0");
	printf("test_ft_stack_push_with_null_stack passed\n");
}

void	test_ft_stack_push_with_null_data(void)
{
	t_stack	*stack;
	int		result;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");

	result = ft_stack_push(stack, NULL);
	assert(result == 0 && "Pushing NULL data should return 0");
	ft_stack_clear(stack);
	printf("test_ft_stack_push_with_null_data passed\n");
}

int	main(void)
{
	test_ft_stack_push_with_valid_data();
	test_ft_stack_push_with_null_stack();
	test_ft_stack_push_with_null_data();
	printf("All tests passed for ft_stack_push\n");
	return (0);
}

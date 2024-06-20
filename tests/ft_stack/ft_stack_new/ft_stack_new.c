/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:49:29 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 17:00:52 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_new_with_valid_parameters(void)
{
	t_stack	*stack;
	size_t	data_size;
	void	(*free_func)(void *);

	data_size = sizeof(int);
	free_func = free;
	stack = ft_stack_new(data_size, free_func);
	assert(stack != NULL && "Failed to create stack with valid parameters");
	assert(stack->data_size == data_size && "Stack data size is incorrect");
	assert(stack->free_func == free_func && "Stack free function is incorrect");
	assert(stack->top == NULL && "Stack top is not NULL");
	assert(stack->size == 0 && "Stack size is not zero");
	ft_stack_clear(stack);
	printf("test_ft_stack_new_with_valid_parameters passed\n");
}

void	test_ft_stack_new_with_zero_data_size(void)
{
	t_stack	*stack;
	size_t	data_size;
	void	(*free_func)(void *);

	data_size = 0;
	free_func = free;
	stack = ft_stack_new(data_size, free_func);
	assert(stack != NULL && "Failed to create stack with zero data size");
	assert(stack->data_size == data_size && "Stack data size is incorrect");
	assert(stack->free_func == free_func && "Stack free function is incorrect");
	assert(stack->top == NULL && "Stack top is not NULL");
	assert(stack->size == 0 && "Stack size is not zero");
	ft_stack_clear(stack);
	printf("test_ft_stack_new_with_zero_data_size passed\n");
}

void	test_ft_stack_new_with_null_free_func(void)
{
	t_stack	*stack;
	size_t	data_size;
	void	(*free_func)(void *);

	data_size = sizeof(int);
	free_func = NULL;
	stack = ft_stack_new(data_size, free_func);
	assert(stack != NULL && "Failed to create stack with null free function");
	assert(stack->data_size == data_size && "Stack data size is incorrect");
	assert(stack->free_func == free_func && "Stack free function is incorrect");
	assert(stack->top == NULL && "Stack top is not NULL");
	assert(stack->size == 0 && "Stack size is not zero");
	ft_stack_clear(stack);
	printf("test_ft_stack_new_with_null_free_func passed\n");
}

int	main(void)
{
	test_ft_stack_new_with_valid_parameters();
	test_ft_stack_new_with_zero_data_size();
	test_ft_stack_new_with_null_free_func();
	printf("All tests passed for ft_stack_new\n");
	return (0);
}

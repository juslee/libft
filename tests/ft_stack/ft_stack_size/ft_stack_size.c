/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:00:46 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:58:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_size_with_empty_stack(void)
{
	t_stack	*stack;
	int		size;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	size = ft_stack_size(stack);
	assert(size == 0 && "Stack size should be 0 for empty stack");
	ft_stack_clear(stack);
	printf("test_ft_stack_size_with_empty_stack passed\n");
}

void	test_ft_stack_size_with_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;
	int		element3;
	int		size;

	element1 = 1;
	element2 = 2;
	element3 = 3;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	size = ft_stack_size(stack);
	assert(size == 1 && "Stack size should be 1 after one push");
	ft_stack_push(stack, &element2);
	size = ft_stack_size(stack);
	assert(size == 2 && "Stack size should be 2 after two pushes");
	ft_stack_push(stack, &element3);
	size = ft_stack_size(stack);
	assert(size == 3 && "Stack size should be 3 after three pushes");
	ft_stack_clear(stack);
	printf("test_ft_stack_size_with_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_size_with_empty_stack();
	test_ft_stack_size_with_non_empty_stack();
	printf("All tests passed for ft_stack_size\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:46:05 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:57:47 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_is_empty_with_empty_stack(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	assert(ft_stack_is_empty(stack) == 1 && "Stack should be empty");
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_with_empty_stack passed\n");
}

void	test_ft_stack_is_empty_with_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;

	element1 = 1;
	element2 = 2;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	ft_stack_push(stack, &element2);
	assert(ft_stack_is_empty(stack) == 0 && "Stack should not be empty");
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_with_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_is_empty_with_empty_stack();
	test_ft_stack_is_empty_with_non_empty_stack();
	printf("All tests passed for ft_stack_is_empty\n");
	return (0);
}

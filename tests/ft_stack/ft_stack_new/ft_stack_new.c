/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:12:33 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:17:51 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_new_int(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(int));
	assert(stack != NULL);
	assert(stack->top == NULL);
	assert(stack->elem_size == sizeof(int));
	ft_stack_clear(stack);
	printf("test_ft_stack_new_int passed.\n");
}

void	test_ft_stack_new_char(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(char));
	assert(stack != NULL);
	assert(stack->top == NULL);
	assert(stack->elem_size == sizeof(char));
	ft_stack_clear(stack);
	printf("test_ft_stack_new_char passed.\n");
}

void	test_ft_stack_new_zero_size(void)
{
	t_stack	*stack;

	stack = ft_stack_new(0);
	assert(stack != NULL);
	assert(stack->top == NULL);
	assert(stack->elem_size == 0);
	ft_stack_clear(stack);
	printf("test_ft_stack_new_zero_size passed.\n");
}

int	main(void)
{
	test_ft_stack_new_int();
	test_ft_stack_new_char();
	test_ft_stack_new_zero_size();
	printf("All tests passed!\n");
	return (0);
}

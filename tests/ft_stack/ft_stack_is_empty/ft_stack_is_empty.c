/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:23:15 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:25:05 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_is_empty_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	assert(ft_stack_is_empty(stack) == 1);
	value = 42;
	ft_stack_push(stack, &value);
	assert(ft_stack_is_empty(stack) == 0);
	ft_stack_pop(stack);
	assert(ft_stack_is_empty(stack) == 1);
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_int passed\n");
}

void	test_ft_stack_is_empty_zero_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	value = 0;
	ft_stack_push(stack, &value);
	assert(ft_stack_is_empty(stack) == 0);
	ft_stack_pop(stack);
	assert(ft_stack_is_empty(stack) == 1);
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_zero_int passed\n");
}

void	test_ft_stack_is_empty_null_int(void)
{
	assert(ft_stack_is_empty(NULL) == 1);
	printf("test_ft_stack_is_empty_null_int passed\n");
}

void	test_ft_stack_is_empty_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	assert(ft_stack_is_empty(stack) == 1);
	char_value = 'a';
	ft_stack_push(stack, &char_value);
	assert(ft_stack_is_empty(stack) == 0);
	ft_stack_pop(stack);
	assert(ft_stack_is_empty(stack) == 1);
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_char passed\n");
}

void	test_ft_stack_is_empty_zero_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	char_value = '\0';
	ft_stack_push(stack, &char_value);
	assert(ft_stack_is_empty(stack) == 0);
	ft_stack_pop(stack);
	assert(ft_stack_is_empty(stack) == 1);
	ft_stack_clear(stack);
	printf("test_ft_stack_is_empty_zero_char passed\n");
}

void	test_ft_stack_is_empty_null_char(void)
{
	assert(ft_stack_is_empty(NULL) == 1);
	printf("test_ft_stack_is_empty_null_char passed\n");
}

int	main(void)
{
	test_ft_stack_is_empty_int();
	test_ft_stack_is_empty_zero_int();
	test_ft_stack_is_empty_null_int();
	test_ft_stack_is_empty_char();
	test_ft_stack_is_empty_zero_char();
	test_ft_stack_is_empty_null_char();
	printf("All tests passed\n");
	return (0);
}

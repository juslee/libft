/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:14:50 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:41:53 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_push_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	assert(stack != NULL);
	value = 42;
	ft_stack_push(stack, &value);
	assert(stack->top != NULL);
	assert(*(int *)stack->top->content == value);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_int passed.\n");
}

void	test_ft_stack_push_zero_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	assert(stack != NULL);
	value = 0;
	ft_stack_push(stack, &value);
	assert(stack->top != NULL);
	assert(*(int *)stack->top->content == value);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_zero_int passed.\n");
}

void	test_ft_stack_push_null_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	assert(stack != NULL);
	value = 42;
	ft_stack_push(NULL, &value);
	assert(stack->top == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_null_int passed.\n");
}

void	test_ft_stack_push_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	assert(stack != NULL);
	char_value = 'a';
	ft_stack_push(stack, &char_value);
	assert(stack->top != NULL);
	assert(*(char *)stack->top->content == char_value);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_char passed.\n");
}

void	test_ft_stack_push_null_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	assert(stack != NULL);
	char_value = 'a';
	ft_stack_push(NULL, &char_value);
	assert(stack->top == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_null_char passed.\n");
}

void	test_ft_stack_push_zero_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	assert(stack != NULL);
	char_value = '\0';
	ft_stack_push(stack, &char_value);
	assert(stack->top != NULL);
	assert(*(char *)stack->top->content == char_value);
	ft_stack_clear(stack);
	printf("test_ft_stack_push_zero_char passed.\n");
}

int	main(void)
{
	test_ft_stack_push_int();
	test_ft_stack_push_zero_int();
	test_ft_stack_push_null_int();
	test_ft_stack_push_char();
	test_ft_stack_push_null_char();
	test_ft_stack_push_zero_char();
	printf("All tests passed!\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:21:36 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:48:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_peek_int(void)
{
	t_stack	*stack;
	int		value;
	void	*peeked;

	stack = ft_stack_new(sizeof(int));
	value = 42;
	ft_stack_push(stack, &value);
	peeked = ft_stack_peek(stack);
	assert(peeked != NULL);
	assert(*(int *)peeked == value);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_int passed\n");
}

void	test_ft_stack_peek_zero_int(void)
{
	t_stack	*stack;
	int		value;
	void	*peeked;

	stack = ft_stack_new(sizeof(int));
	value = 0;
	ft_stack_push(stack, &value);
	peeked = ft_stack_peek(stack);
	assert(peeked != NULL);
	assert(*(int *)peeked == value);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_zero_int passed\n");
}

void	test_ft_stack_peek_empty_int(void)
{
	t_stack	*stack;
	void	*peeked;

	stack = ft_stack_new(sizeof(int));
	peeked = ft_stack_peek(stack);
	assert(peeked == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_empty_int passed\n");
}

void	test_ft_stack_peek_char(void)
{
	t_stack	*stack;
	char	char_value;
	void	*peeked;

	stack = ft_stack_new(sizeof(char));
	char_value = 'a';
	ft_stack_push(stack, &char_value);
	peeked = ft_stack_peek(stack);
	assert(peeked != NULL);
	assert(*(char *)peeked == char_value);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_char passed\n");
}

void	test_ft_stack_peek_zero_char(void)
{
	t_stack	*stack;
	char	char_value;
	void	*peeked;

	stack = ft_stack_new(sizeof(char));
	char_value = '\0';
	ft_stack_push(stack, &char_value);
	peeked = ft_stack_peek(stack);
	assert(peeked != NULL);
	assert(*(char *)peeked == char_value);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_zero_char passed\n");
}

void	test_ft_stack_peek_empty_char(void)
{
	t_stack	*stack;
	void	*peeked;

	stack = ft_stack_new(sizeof(char));
	peeked = ft_stack_peek(stack);
	assert(peeked == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_peek_empty_char passed\n");
}

int	main(void)
{
	test_ft_stack_peek_int();
	test_ft_stack_peek_zero_int();
	test_ft_stack_peek_empty_int();
	test_ft_stack_peek_char();
	test_ft_stack_peek_zero_char();
	test_ft_stack_peek_empty_char();
	printf("All tests passed\n");
	return (0);
}

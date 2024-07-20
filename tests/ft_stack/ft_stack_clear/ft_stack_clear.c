/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:25:36 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:26:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_clear_int(void)
{
	t_stack	*stack;
	int		value;

	stack = ft_stack_new(sizeof(int));
	value = 42;
	ft_stack_push(stack, &value);
	ft_stack_clear(stack);
	printf("test_ft_stack_clear_int passed\n");
}

void	test_ft_stack_clear_empty_int(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(int));
	ft_stack_clear(stack);
	printf("test_ft_stack_clear_empty_int passed\n");
}

void	test_ft_stack_clear_null_int(void)
{
	ft_stack_clear(NULL);
	printf("test_ft_stack_clear_null_int passed\n");
}

void	test_ft_stack_clear_char(void)
{
	t_stack	*stack;
	char	char_value;

	stack = ft_stack_new(sizeof(char));
	char_value = 'a';
	ft_stack_push(stack, &char_value);
	ft_stack_clear(stack);
	printf("test_ft_stack_clear_char passed\n");
}

void	test_ft_stack_clear_empty_char(void)
{
	t_stack	*stack;

	stack = ft_stack_new(sizeof(char));
	ft_stack_clear(stack);
	printf("test_ft_stack_clear_empty_char passed\n");
}

void	test_ft_stack_clear_null_char(void)
{
	ft_stack_clear(NULL);
	printf("test_ft_stack_clear_null_char passed\n");
}

int	main(void)
{
	test_ft_stack_clear_int();
	test_ft_stack_clear_empty_int();
	test_ft_stack_clear_null_int();
	test_ft_stack_clear_char();
	test_ft_stack_clear_empty_char();
	test_ft_stack_clear_null_char();
	printf("All tests passed\n");
	return (0);
}

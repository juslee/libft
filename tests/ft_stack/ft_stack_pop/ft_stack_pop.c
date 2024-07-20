/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:20:41 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:45:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "ft_stack.h"

void	test_ft_stack_pop_int(void)
{
	t_stack	*stack;
	int		value1;
	int		value2;
	void	*popped;

	stack = ft_stack_new(sizeof(int));
	value1 = 42;
	value2 = 84;
	ft_stack_push(stack, &value1);
	ft_stack_push(stack, &value2);
	popped = ft_stack_pop(stack);
	assert(popped != NULL);
	assert(*(int *)popped == value2);
	free(popped);
	popped = ft_stack_pop(stack);
	assert(popped != NULL);
	assert(*(int *)popped == value1);
	free(popped);
	assert(ft_stack_pop(stack) == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_int passed\n");
}

void	test_ft_stack_pop_empty_int(void)
{
	t_stack	*stack;
	void	*popped;

	stack = ft_stack_new(sizeof(int));
	popped = ft_stack_pop(stack);
	assert(popped == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_empty_int passed\n");
}

void	test_ft_stack_pop_char(void)
{
	t_stack	*stack;
	char	char_value1;
	char	char_value2;
	void	*popped;

	stack = ft_stack_new(sizeof(char));
	char_value1 = 'a';
	char_value2 = 'b';
	ft_stack_push(stack, &char_value1);
	ft_stack_push(stack, &char_value2);
	popped = ft_stack_pop(stack);
	assert(popped != NULL);
	assert(*(char *)popped == char_value2);
	free(popped);
	popped = ft_stack_pop(stack);
	assert(popped != NULL);
	assert(*(char *)popped == char_value1);
	free(popped);
	assert(ft_stack_pop(stack) == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_char passed\n");
}

void	test_ft_stack_pop_empty_char(void)
{
	t_stack	*stack;
	void	*popped;

	stack = ft_stack_new(sizeof(char));
	popped = ft_stack_pop(stack);
	assert(popped == NULL);
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_empty_char passed\n");
}

int	main(void)
{
	test_ft_stack_pop_int();
	test_ft_stack_pop_empty_int();
	test_ft_stack_pop_char();
	test_ft_stack_pop_empty_char();
	printf("All tests passed\n");
	return (0);
}

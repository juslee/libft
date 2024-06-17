/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:52:13 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:53:23 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_peek_with_empty_stack(void)
{
	t_stack	*stack;
	void	*peeked_data;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	peeked_data = ft_stack_peek(stack);
	assert(peeked_data == NULL && "Peeked data should be NULL for empty stack");
	ft_stack_clear(stack);
	free(stack);
	printf("test_ft_stack_peek_with_empty_stack passed\n");
}

void	test_ft_stack_peek_with_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;
	int		element3;
	void	*peeked_data;

	element1 = 1;
	element2 = 2;
	element3 = 3;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	ft_stack_push(stack, &element2);
	ft_stack_push(stack, &element3);
	peeked_data = ft_stack_peek(stack);
	assert(peeked_data != NULL
		&& "Peeked data should not be NULL for non-empty stack");
	assert(*(int *)peeked_data == element3
		&& "Peeked data should be the top element (element3)");
	ft_stack_clear(stack);
	free(stack);
	printf("test_ft_stack_peek_with_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_peek_with_empty_stack();
	test_ft_stack_peek_with_non_empty_stack();
	printf("All tests passed for ft_stack_peek\n");
	return (0);
}

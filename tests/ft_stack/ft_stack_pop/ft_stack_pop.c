/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:54:33 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:58:40 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_stack_pop_with_empty_stack(void)
{
	t_stack	*stack;
	void	*popped_data;

	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	popped_data = ft_stack_pop(stack);
	assert(popped_data == NULL && "Popped data should be NULL for empty stack");
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_with_empty_stack passed\n");
}

void	test_ft_stack_pop_with_non_empty_stack(void)
{
	t_stack	*stack;
	int		element1;
	int		element2;
	int		element3;
	void	*popped_data;

	element1 = 1;
	element2 = 2;
	element3 = 3;
	stack = ft_stack_new(sizeof(int), free);
	assert(stack != NULL && "Failed to create stack");
	ft_stack_push(stack, &element1);
	ft_stack_push(stack, &element2);
	ft_stack_push(stack, &element3);
	popped_data = ft_stack_pop(stack);
	assert(popped_data != NULL && "Popped data should not be NULL for non-empty stack");
	assert(*(int *)popped_data == element3 && "Popped data should be the top element (element3)");
	free(popped_data);
	popped_data = ft_stack_pop(stack);
	assert(popped_data != NULL && "Popped data should not be NULL for non-empty stack");
	assert(*(int *)popped_data == element2 && "Popped data should be the top element (element2)");
	free(popped_data);
	popped_data = ft_stack_pop(stack);
	assert(popped_data != NULL && "Popped data should not be NULL for non-empty stack");
	assert(*(int *)popped_data == element1 && "Popped data should be the top element (element1)");
	free(popped_data);
	ft_stack_clear(stack);
	printf("test_ft_stack_pop_with_non_empty_stack passed\n");
}

int	main(void)
{
	test_ft_stack_pop_with_empty_stack();
	test_ft_stack_pop_with_non_empty_stack();
	printf("All tests passed for ft_stack_pop\n");
	return (0);
}

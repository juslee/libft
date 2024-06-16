/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:37:16 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 11:16:23 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_new.c
 * @brief Creates a new stack.
 */

#include "libft.h"

/**
 * @brief Creates a new stack.
 * @param data_size The size of the data to be stored in the stack
 * @param free_func The function used to free the data stored in the stack
 * @return The newly created stack
 */
t_stack	*ft_stack_new(size_t data_size, void (*free_func)(void *))
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->top = NULL;
	stack->data_size = data_size;
	stack->free_func = free_func;
	stack->size = 0;
	return (stack);
}

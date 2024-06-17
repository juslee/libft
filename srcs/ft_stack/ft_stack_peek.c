/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:58:19 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:31:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_peek.c
 * @brief Peeks at the top of the stack.
 */

#include "libft.h"

/**
 * @brief Peeks at the top of the stack.
 * @param stack The stack to peek at
 * @return The data at the top of the stack
 */
void	*ft_stack_peek(t_stack *stack)
{
	if (stack == NULL || ft_stack_is_empty(stack))
		return (NULL);
	return (stack->top->content);
}

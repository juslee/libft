/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:10:03 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:32:42 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_top.c
 * @brief Gets the top of the stack.
 */

#include "libft.h"

/**
 * @brief Gets the top of the stack.
 * @param stack The stack to get the top of
 * @return The top of the stack
 */
void	*ft_stack_top(t_stack *stack)
{
	if (stack == NULL || ft_stack_is_empty(stack))
		return (NULL);
	return (stack->top->content);
}

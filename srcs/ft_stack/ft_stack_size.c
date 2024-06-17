/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:10:57 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:32:33 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_size.c
 * @brief Gets the size of the stack.
 */

#include "libft.h"

/**
 * @brief Gets the size of the stack.
 * @param stack The stack to get the size of
 * @return The size of the stack
 */
int	ft_stack_size(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (stack->size);
}

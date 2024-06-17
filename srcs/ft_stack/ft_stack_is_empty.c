/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:00:16 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:32:01 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_is_empty.c
 * @brief Checks if the stack is empty.
 */

#include "libft.h"

/**
 * @brief Checks if the stack is empty.
 * @param stack The stack to check
 * @return 1 if the stack is empty, 0 otherwise
 */
int	ft_stack_is_empty(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	return (stack->top == NULL);
}

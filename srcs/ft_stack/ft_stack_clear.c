/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:03:18 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 13:58:37 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_clear.c
 * @brief Clears the stack.
 */

#include "libft.h"

/**
 * @brief Clears the stack.
 * @param stack The stack to clear
 */
void	ft_stack_clear(t_stack *stack)
{
	void	*data;

	if (stack == NULL)
		return ;
	while (!ft_stack_is_empty(stack))
	{
		data = ft_stack_pop(stack);
		if (stack->free_func)
			stack->free_func(data);
		else
			free(data);
	}
	stack->size = 0;
	stack->top = NULL;
	free(stack);
}

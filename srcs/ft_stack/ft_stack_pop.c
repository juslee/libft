/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:55:31 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 11:17:43 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_pop.c
 * @brief Pops data from the stack.
 */

#include "libft.h"

/**
 * @brief Pops data from the stack.
 * @param stack The stack to pop data from
 * @return The data that was popped from the stack
 */
void	*ft_stack_pop(t_stack *stack)
{
	t_list	*temp;
	void	*popped_data;

	if (ft_stack_is_empty(stack))
		return (NULL);
	temp = stack->top;
	popped_data = temp->content;
	stack->top = stack->top->next;
	free(temp);
	stack->size--;
	return (popped_data);
}

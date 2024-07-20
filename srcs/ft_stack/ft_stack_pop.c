/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:16:01 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 17:17:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stack_pop(t_stack *stack)
{
	t_list	*top;
	void	*value;

	if (!stack || !stack->top)
		return (NULL);
	top = stack->top;
	stack->top = stack->top->next;
	value = top->content;
	free(top);
	return (value);
}

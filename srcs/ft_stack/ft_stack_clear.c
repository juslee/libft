/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:20:11 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 17:35:28 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_clear(t_stack *stack)
{
	if (!stack || !stack->top)
		return ;
	ft_lstclear(&stack->top, free);
	free(stack);
}

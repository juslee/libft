/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:09:04 by welee             #+#    #+#             */
/*   Updated: 2024/07/20 18:44:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stack.h"

void	ft_stack_push(t_stack *stack, void *value)
{
	t_list	*new_node;

	if (!stack || !value)
		return ;
	new_node = ft_lstnew(malloc(stack->elem_size));
	if (!new_node || !new_node->content)
	{
		if (new_node)
			free(new_node);
		return ;
	}
	ft_memcpy(new_node->content, value, stack->elem_size);
	ft_lstadd_front(&stack->top, new_node);
}

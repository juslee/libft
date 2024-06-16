/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:49:19 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 11:17:25 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_stack_push.c
 * @brief Pushes data onto the stack.
 */

#include "libft.h"

/**
 * @brief Pushes data onto the stack.
 * @param stack The stack to push data onto
 * @param data The data to push onto the stack
 * @return 1 if the data was successfully pushed onto the stack, 0 otherwise
 */
int	ft_stack_push(t_stack *stack, void *data)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (0);
	new_node->content = malloc(stack->data_size);
	if (new_node->content == NULL)
	{
		free(new_node);
		return (0);
	}
	ft_memcpy(new_node->content, data, stack->data_size);
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	return (1);
}

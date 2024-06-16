/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:17:08 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 15:11:12 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H
# include <stdlib.h>
# include "ft_list.h"

// Stack structure
typedef struct s_stack
{
	t_list	*top;
	size_t	data_size;
	void	(*free_func)(void *);
	int		size;
}	t_stack;

// Stack manipulation functions
t_stack	*ft_stack_new(size_t data_size, void (*free_func)(void *));
int		ft_stack_push(t_stack *stack, void *data);
void	*ft_stack_pop(t_stack *stack);
void	*ft_stack_peek(t_stack *stack);
void	*ft_stack_top(t_stack *stack);
int		ft_stack_size(t_stack *stack);
int		ft_stack_is_empty(t_stack *stack);
void	ft_stack_clear(t_stack *stack);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:19:07 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:19:39 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front.c
 * @brief Adds the element 'new' at the beginning of the list.
 */

#include "libft.h"

/**
 * @brief Adds the element 'new' at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the element to be added to the list
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

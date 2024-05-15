/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:26:18 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:26:37 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_back.c
 * @brief Adds the element 'new' at the end of the list.
 */

#include "libft.h"

/**
 * @brief Adds the element 'new' at the end of the list.
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the element to be added to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}

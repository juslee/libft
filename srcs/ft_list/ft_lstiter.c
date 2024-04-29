/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:29:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:30:19 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstiter.c
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 * of each element.
 */

#include "libft.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 * of each element.
 * @param lst The beginning of the list
 * @param f The address of the function used to iterate on the list
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:25:20 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:25:51 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstlast.c
 * @brief Returns the last element of the list.
 */

#include "libft.h"

/**
 * @brief Returns the last element of the list.
 * @param lst The beginning of the list
 * @return The last element of the list
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

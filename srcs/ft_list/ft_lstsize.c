/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:24:27 by welee             #+#    #+#             */
/*   Updated: 2024/05/15 13:57:50 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize.c
 * @brief Counts the number of elements in a list.
 */

#include "libft.h"

/**
 * @brief Counts the number of elements in a list.
 * @param lst The beginning of the list
 * @return The length of the list
 */
int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		++size;
		lst = lst->next;
	}
	return (size);
}

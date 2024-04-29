/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:28:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:29:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstclear.c
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function 'del' and free(3).
 */

#include "libft.h"

/*
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function 'del' and free(3).
 * @param lst The address of a pointer to the first link of a list
 * @param del The address of the function used to delete the content of the
 * element
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}

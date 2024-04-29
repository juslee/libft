/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:27:03 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:48:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstdelone.c
 * @brief Deletes and frees the given element and its content.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Deletes and frees the given element and its content.
 * @param lst The element to be freed
 * @param del The address of the function used to delete the content of the
 * element
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:17:22 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:47:39 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @brief Allocates and returns a new element. The variable 'content' is
 * initialized with the value of the parameter 'content'. The variable 'next'
 * is initialized to NULL.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Allocates and returns a new element. The variable 'content' is
 * initialized with the value of the parameter 'content'. The variable 'next'
 * is initialized to NULL.
 * @param content The content to create the new element with
 * @return The new element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

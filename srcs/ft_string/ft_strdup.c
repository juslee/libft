/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:32:43 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 16:30:59 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strdup.c
 * @brief Duplicate a string.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Duplicate a string.
 * @param s The string to duplicate.
 * @return The duplicated string.
 */
char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}

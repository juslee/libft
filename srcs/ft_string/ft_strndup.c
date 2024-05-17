/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:09:12 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:24:34 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Duplicates a string up to a specified length.
 *
 * @param s The string to duplicate.
 * @param n The maximum number of characters to duplicate.
 * @return char* The duplicated string.
 */
char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (len < n)
		n = len;
	dup = (char *)malloc(n + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
	return (dup);
}

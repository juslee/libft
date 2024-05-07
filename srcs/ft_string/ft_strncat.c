/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:40:34 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 16:15:20 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncat.c
 * @brief Append at most n characters from the null-terminated string src to the
 * end of the null-terminated string dest.
 */

#include <stddef.h>
#include "libft.h"

/**
 * @brief Append at most n characters from the null-terminated string src to the
 * end of the null-terminated string dest.
 * @param dest The destination string.
 * @param src The source string.
 * @param n The maximum number of characters to append.
 * @return The destination string.
 */
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

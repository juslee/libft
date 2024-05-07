/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:38:09 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:40:15 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strcat.c
 * @brief Append a copy of the null-terminated string src to the end of the
 * null-terminated string dest.
 */

#include <stddef.h>

/**
 * @brief Append a copy of the null-terminated string src to the end of the
 * null-terminated string dest.
 * @param dest The destination string.
 * @param src The source string.
 * @return The destination string.
 */
char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:34:38 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:37:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncpy.c
 * @brief Write at most n characters from src into dest.
 */

#include <stddef.h>

/**
 * @brief Write at most n characters from src into dest.
 * @param dest The destination string.
 * @param src The source string.
 * @param n The maximum number of characters to copy.
 * @return The destination string.
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

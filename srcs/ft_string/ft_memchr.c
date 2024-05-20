/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:25:03 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 16:37:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @brief Scan memory for a character.
 */

#include <stddef.h>

/**
 * @brief Scan memory for a character.
 * @param s Memory area.
 * @param c Character to scan.
 * @param n Number of bytes to scan.
 * @return A pointer to the matching byte or NULL if the character does
 * not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return (src);
		++src;
	}
	return (NULL);
}

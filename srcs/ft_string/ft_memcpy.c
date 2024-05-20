/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:47:39 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 18:05:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcpy.c
 * @brief Copies n bytes from memory area src to memory area dest.
 */

#include <stddef.h>
#include "libft.h"

/**
 * @brief Copy memory area
 * @param dst void pointer to the destination
 * @param src void pointer to the source
 * @param n number of bytes to copy
 * @return The original destination pointer
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest && !src && n != 0)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--)
		*destination++ = *source++;
	return (dest);
}

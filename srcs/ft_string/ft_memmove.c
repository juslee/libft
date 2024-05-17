/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:13:44 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 15:10:25 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memmove.c
 * @brief Copy memory area.
 */

#include <stddef.h>

/**
 * @brief The memmove() function copies n bytes from memory area src to
	memory area dest.  The memory areas may overlap: copying takes
	place as though the bytes in src are first copied into a
	temporary array that does not overlap src or dest, and the bytes
	are then copied from the temporary array to dest.
 * @param dst The destination.
 * @param src The source.
 * @param len The number of bytes to copy.
 * @return The destination.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (!dst || !src)
		return (NULL);
	if (dst < src)
	{
		dst_ptr = (unsigned char *)dst;
		src_ptr = (unsigned char *)src;
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr = (unsigned char *)dst + len;
		src_ptr = (unsigned char *)src + len;
		while (len--)
			*--dst_ptr = *--src_ptr;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:13:44 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:27:17 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memmove.c
 * @brief Copy memory area.
 */

#include <stddef.h>

/**
 * @brief Copy memory area.
 * @param dst The destination.
 * @param src The source.
 * @param len The number of bytes to copy.
 * @return The destination.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (dst == src)
		return (dst);
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

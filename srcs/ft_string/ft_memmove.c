/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:13:44 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 13:15:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief Copy memory area
/// @param dst destination
/// @param src source
/// @param len number of bytes to copy
/// @return destination
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

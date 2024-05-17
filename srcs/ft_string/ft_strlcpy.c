/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:40:21 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:22:47 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @brief Copy string to a fixed size buffer
 */

#include "libft.h"
#include <stddef.h>

/**
 * @brief Copy string to a fixed size buffer
 * @param dst The destination buffer
 * @param src The source string
 * @param dstsize The size of the destination buffer
 * @return The length of the source string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

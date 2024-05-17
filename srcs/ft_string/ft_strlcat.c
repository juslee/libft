/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:05:11 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 19:03:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcat.c
 * @brief Concatenate strings
 */
#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*ret;

	ret = dst;
	while (*dst)
		dst++;
	while (n-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}

/**
 * @brief Concatenate strings
 * @param dst destination buffer
 * @param src source string
 * @param dstsize size of the destination buffer
 * @return the length of the source string + the length of the destination
 * string
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	to_copy;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	to_copy = dstsize - dst_len - 1;
	ft_strncat(dst, src, to_copy);
	return (dst_len + src_len);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	src_len;
// 	size_t	dst_len;

// 	if (!dst || !src)
// 		return (0);
// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	if (dst_len >= dstsize)
// 		dst_len = dstsize;
// 	if (dst_len == dstsize)
// 		return (dstsize + src_len);
// 	if (src_len < dstsize - dst_len)
// 		ft_memcpy(dst + dst_len, src, src_len + 1);
// 	else
// 	{
// 		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
// 		dst[dstsize - 1] = '\0';
// 	}
// 	return (dst_len + src_len);
// }

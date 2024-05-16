/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:29:21 by welee             #+#    #+#             */
/*   Updated: 2024/05/16 15:00:47 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memccpy.c
 * @brief Copy memory area.
 */

#include <stddef.h>

/**
 * @brief Copy memory area.
 * @param dest Destination memory area.
 * @param src Source memory area.
 * @param c Character to scan.
 * @param n Number of bytes to copy.
 * @return A pointer to the byte after the copy of the character or NULL if the
 * character does not occur in the first n bytes of the source memory area.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;
	size_t					i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		if (src_ptr[i] == (unsigned char)c)
			return (dest_ptr + i + 1);
		i++;
	}
	return (NULL);
}

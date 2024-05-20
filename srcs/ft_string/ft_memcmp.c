/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:28:00 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 16:37:10 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcmp.c
 * @brief Compare two memory areas.
 */

#include <stddef.h>

/**
 * @brief Compare two memory areas.
 * @param s1 First memory area.
 * @param s2 Second memory area.
 * @param n Number of bytes to compare.
 * @return 0 if the two memory areas are identical, otherwise the difference
 * between the first two differing bytes.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n--)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		++src1;
		++src2;
	}
	return (0);
}

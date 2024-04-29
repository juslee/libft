/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:09:52 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:22:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_bzero.c
 * @brief Write zeroes to a byte string.
 */
#include "libft.h"

/**
 * @brief Write zeroes to a byte string.
 * @param s The pointer to the byte string.
 * @param n The number of bytes to write.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

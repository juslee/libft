/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:34:26 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:24:34 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @brief Allocates memory for an array of elements of size bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Allocates memory for an array of elements of size bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero.
 * @param count The number of elements.
 * @param size The size of each element.
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

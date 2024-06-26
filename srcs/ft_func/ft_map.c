/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:57:51 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 12:08:29 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_map.c
 * @brief Applies the function f to each element of the array given as argument
 */

#include "libft.h"

/**
 * @brief Applies the function f to each element of the array given as argument
 * @param array The array to map
 * @param count The number of elements in the array
 * @param func The function to apply to each element
 * @return The array of mapped elements
 */
void	*ft_map(void *array, size_t count, t_map_func func)
{
	void	*result;
	size_t	i;
	void	*element;
	void	*mapped_element;

	result = malloc(count * sizeof(void *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		element = (char *)array + i * sizeof(void *);
		mapped_element = func(element);
		if (!mapped_element)
		{
			free(result);
			return (NULL);
		}
		ft_memcpy((char *)result + i * sizeof(void *),
			mapped_element, sizeof(void *));
		free(mapped_element);
		i++;
	}
	return (result);
}

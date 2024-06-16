/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:04:22 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 12:08:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_reduce.c
 * @brief Reduces the array to a single value.
 */

#include "libft.h"

/**
 * @brief Reduces the array to a single value.
 * @param array The array to reduce
 * @param count The number of elements in the array
 * @param func The function to reduce the array with
 * @param initial The initial value
 * @return The reduced value
 */
void	*ft_reduce(void *array, size_t count, t_reduce_func func, void *initial)
{
	void	*result;
	size_t	i;
	void	*element;
	void	*temp;

	result = malloc(sizeof(void *));
	if (!result)
		return (NULL);
	ft_memcpy(result, initial, sizeof(void *));
	i = 0;
	while (i < count)
	{
		element = (char *)array + i * sizeof(void *);
		temp = func(result, element);
		if (temp)
		{
			ft_memcpy(result, temp, sizeof(void *));
			free(temp);
		}
		else
			return (free(result), NULL);
		i++;
	}
	return (result);
}

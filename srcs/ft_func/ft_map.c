/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:57:51 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 12:35:27 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_map.c
 * @brief Applies the function f to each element of the array given as argument
 */
#include <stdlib.h>

/**
 * @brief Applies the function f to each element of the array given as argument
 * and returns an array that contains the results.
 * @param tab array to apply the function
 * @param length size of the array
 * @param f function to apply
 * @return int*
 */
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	idx;
	int	*result;

	idx = 0;
	if (length == 0)
		return (0);
	result = (int *)malloc(sizeof(int) * length);
	if (!result)
		return (0);
	while (idx < length)
	{
		result[idx] = f(tab[idx]);
		++idx;
	}
	return (result);
}

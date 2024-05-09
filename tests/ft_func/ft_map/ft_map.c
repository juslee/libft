/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:06:30 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 12:37:30 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

int	double_value(int n)
{
	return (2 * n);
}

int	increment(int n)
{
	return (n + 1);
}

int	compare_arrays(int *arr1, int *arr2, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (arr1[i] != arr2[i])
		{
			return (0); // Arrays are not equal
		}
		i++;
	}
	return (1);
}

void	test_normal_input(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	expected[5] = {2, 4, 6, 8, 10};
	int	length = sizeof(tab) / sizeof(tab[0]);
	int	*result = ft_map(tab, length, double_value);

	assert(compare_arrays(result, expected, length));
	printf("test_normal_input passed.\n");
	free(result);
}

void	test_zero_length(void)
{
	int	*result = ft_map(NULL, 0, double_value);

	assert(result == NULL);
	printf("test_zero_length passed.\n");
}

void	test_different_function(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	expected[5] = {2, 3, 4, 5, 6};
	int	length = sizeof(tab) / sizeof(tab[0]);
	int	*result = ft_map(tab, length, increment);

	assert(compare_arrays(result, expected, length));
	printf("test_different_function passed.\n");
	free(result);
}

int	main(void)
{
	test_normal_input();
	test_zero_length();
	test_different_function();

	printf("All tests passed.\n");
	return (0);
}

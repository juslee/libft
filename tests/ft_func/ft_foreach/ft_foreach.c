/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:37:12 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 12:05:20 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

// Global variable to track changes made by the function
static int	g_sum = 0;

// Function to increment global_sum by the array element value
void	add_to_sum(int n)
{
	g_sum += n;
}

// Test function to ensure ft_foreach iterates over all elements correctly
void	test_ft_foreach_normal_use(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	expected_sum = 1 + 2 + 3 + 4 + 5;

	g_sum = 0;
	ft_foreach(tab, sizeof(tab) / sizeof(tab[0]), add_to_sum);
	assert(g_sum == expected_sum);
	printf("test_ft_foreach_normal_use passed.\n");
}

// Test function to check that no action is taken on zero-length array
void	test_ft_foreach_zero_length(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	g_sum = 0;
	ft_foreach(tab, 0, add_to_sum);
	assert(g_sum == 0);
	printf("test_ft_foreach_zero_length passed.\n");
}

int	main(void)
{
	test_ft_foreach_normal_use();
	test_ft_foreach_zero_length();

	printf("All tests passed.\n");
	return (0);
}

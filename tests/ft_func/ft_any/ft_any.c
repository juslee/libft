/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:42:26 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 13:52:41 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

// Predicate function that checks if a string contains the character 'b'
int	has_b(const char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == 'b')
			return (1);
		idx++;
	}
	return (0);
}

// Test when no strings contain 'b'
void	test_no_b(void)
{
	char	*tab[] = {"apple", "orange", "melon", NULL};
	int		result;

	result = ft_any(tab, has_b);
	assert(result == 0);
	printf("test_no_b passed.\n");
}

// Test when one string contains 'b'
void	test_has_b(void)
{
	char	*tab[] = {"apple", "banana", "melon", NULL};
	int		result;

	result = ft_any(tab, has_b);
	assert(result == 1);
	printf("test_has_b passed.\n");
}

// Test with an empty array
void	test_empty_tab(void)
{
	char	*tab[] = {NULL};
	int		result;

	result = ft_any(tab, has_b);
	assert(result == 0);
	printf("test_empty_tab passed.\n");
}

int	main(void)
{
	test_no_b();
	test_has_b();
	test_empty_tab();

	printf("All tests passed.\n");
	return (0);
}

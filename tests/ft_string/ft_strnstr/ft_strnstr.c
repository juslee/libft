/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:29:32 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 15:39:20 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_found_within_length(void)
{
	const char	*result = ft_strnstr("Hello, world!", "world", 13);

	assert(result && strcmp(result, "world!") == 0);
}

void	test_not_found_within_length(void)
{
	assert(ft_strnstr("Hello, world!", "world", 7) == NULL);
}

void	test_needle_at_end(void)
{
	const char	*result = ft_strnstr("Hello, world!", "world!", 13);

	assert(result && strcmp(result, "world!") == 0);
}

void	test_needle_beyond_length(void)
{
	assert(ft_strnstr("Hello, world!", "world", 11) == NULL);
}

void	test_needle_longer_than_haystack(void)
{
	assert(ft_strnstr("Hello", "Hello, world!", 5) == NULL);
}

void	test_empty_needle(void)
{
	const char	*result = ft_strnstr("Hello, world!", "", 13);

	assert(result && strcmp(result, "Hello, world!") == 0);
}

void	test_empty_haystack(void)
{
	assert(ft_strnstr("", "world", 0) == NULL);
}

void	test_both_empty(void)
{
	const char	*result = ft_strnstr("", "", 0);

	assert(result && strcmp(result, "") == 0);
}

void	test_same_haystack_and_needle(void)
{
	const char	*result = ft_strnstr("Hello", "Hello", 5);

	assert(result && strcmp(result, "Hello") == 0);
}

void	test(void)
{
	const char	*result = ft_strnstr("Hello", "Hel", 2);
	const char	*result2 = strnstr("Hello", "Hel", 2);

	printf("ft_strnstr: %s\n", result);
	printf("strnstr: %s\n", result2);
	assert(result == result2);
	printf("Test passed.\n");
}

int	main(void)
{
	test_found_within_length();
	test_not_found_within_length();
	test_needle_at_end();
	test_needle_beyond_length();
	test_needle_longer_than_haystack();
	test_empty_needle();
	test_empty_haystack();
	test_both_empty();
	test_same_haystack_and_needle();
	test();

	printf("All tests passed.\n");
	return (0);
}

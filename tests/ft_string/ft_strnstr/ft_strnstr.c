/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:29:32 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 21:33:53 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strnstr_basic(void)
{
	const char	*big = "Hello, world!";
	const char	*little = "world";
	const char	*result = ft_strnstr(big, little, ft_strlen(big));
	const char	*expected = strnstr(big, little, ft_strlen(big));

	assert(result == expected);
	printf("test_strnstr_basic passed.\n");
}

void	test_strnstr_not_found(void)
{
	const char	*big = "Hello, world!";
	const char	*little = "world!";
	const char	*result = ft_strnstr(big, little, 6);

	assert(result == NULL);
	printf("test_strnstr_not_found passed.\n");
}

void	test_strnstr_empty_needle(void)
{
	const char	*big = "Hello, world!";
	const char	*little = "";
	const char	*result = ft_strnstr(big, little, ft_strlen(big));
	const char	*expected = strnstr(big, little, ft_strlen(big));

	assert(result == expected);
	printf("test_strnstr_empty_needle passed.\n");
}

void	test_strnstr_empty_haystack(void)
{
	const char	*big = "";
	const char	*little = "world";
	const char	*result = ft_strnstr(big, little, ft_strlen(big));
	const char	*expected = strnstr(big, little, ft_strlen(big));

	assert(result == expected);
	printf("test_strnstr_empty_haystack passed.\n");
}

void	test_strnstr_empty_both(void)
{
	const char	*big = "";
	const char	*little = "";
	const char	*result = ft_strnstr(big, little, ft_strlen(big));
	const char	*expected = strnstr(big, little, ft_strlen(big));

	assert(result == expected);
	printf("test_strnstr_empty_both passed.\n");
}

void	test_strnstr_zero_length(void)
{
	const char	*big = "Hello, world!";
	const char	*little = "world";
	const char	*result = ft_strnstr(big, little, 0);
	const char	*expected = strnstr(big, little, 0);

	assert(result == expected);
	printf("test_strnstr_zero_length passed.\n");
}

int	main(void)
{
	test_strnstr_basic();
	test_strnstr_not_found();
	test_strnstr_empty_needle();
	test_strnstr_empty_haystack();
	test_strnstr_empty_both();
	test_strnstr_zero_length();

	printf("All tests passed.\n");
	return (0);
}

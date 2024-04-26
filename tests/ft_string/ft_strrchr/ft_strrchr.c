/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:22:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 21:36:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strrchr_basic(void)
{
	const char	*str = "Hello, world!";
	const char	*expected = strrchr(str, 'o');
	const char	*actual = ft_strrchr(str, 'o');

	assert(expected == actual);
	printf("test_strrchr_basic passed.\n");
}

void	test_strrchr_not_found(void)
{
	const char	*str = "Hello, world!";
	const char	*expected = strrchr(str, 'z');
	const char	*actual = ft_strrchr(str, 'z');

	assert(expected == actual);
	printf("test_strrchr_not_found passed.\n");
}

void	test_strrchr_first_char(void)
{
	const char	*str = "Hello, world!";
	const char	*expected = strrchr(str, 'H');
	const char	*actual = ft_strrchr(str, 'H');

	assert(expected == actual);
	printf("test_strrchr_first_char passed.\n");
}

void	test_strrchr_find_null(void)
{
	const char	*str = "Find the null char";
	const char	*expected = strrchr(str, '\0');
	const char	*actual = ft_strrchr(str, '\0');

	assert(expected == actual);
	printf("test_strrchr_find_null passed.\n");
}

void	test_strrchr_return_value(void)
{
	const char	*str = "Hello, world!";
	const char	*expected = &str[8];
	const char	*actual = ft_strrchr(str, 'o');

	assert(expected == actual);
	printf("test_strrchr_return_value passed.\n");
}

void	test_strrchr_zero_length(void)
{
	const char	*str = "No search should be done.";
	const char	*expected = strrchr(str, 'Z');
	const char	*actual = ft_strrchr(str, 'Z');

	assert(expected == actual);
	printf("test_strrchr_zero_length passed.\n");
}

void	test_strrchr_repeated_char(void)
{
	const char	*str = "Hello, world! Hello, universe!";
	const char	*expected = strrchr(str, 'o');
	const char	*actual = ft_strrchr(str, 'o');

	assert(expected == actual);
	printf("test_strrchr_repeated_char passed.\n");
}

int	main(void)
{
	test_strrchr_basic();
	test_strrchr_not_found();
	test_strrchr_first_char();
	test_strrchr_find_null();
	test_strrchr_return_value();
	test_strrchr_zero_length();
	test_strrchr_repeated_char();

	printf("All tests passed.\n");
	return (0);
}


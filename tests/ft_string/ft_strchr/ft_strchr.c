/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:40:12 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 17:55:25 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strchr_found(void)
{
	const char	str[] = "Hello, world!";
	const char	*result = ft_strchr(str, 'w');

	assert(result != NULL && *result == 'w');
	printf("test_strchr_found passed.\n");
}

void	test_strchr_not_found(void)
{
	const char	str[] = "Hello, world!";
	const char	*result = ft_strchr(str, 'z');

	assert(result == NULL);
	printf("test_strchr_not_found passed.\n");
}

void	test_strchr_first_char(void)
{
	const char	str[] = "Hello, world!";
	const char	*result = ft_strchr(str, 'H');

	assert(result == str && *result == 'H');
	printf("test_strchr_first_char passed.\n");
}

void	test_strchr_find_null(void)
{
	const char	str[] = "Find the null char";
	const char	*result = ft_strchr(str, '\0');

	assert(result == &str[strlen(str)]);
	printf("test_strchr_find_null passed.\n");
}

void	test_strchr_return_value(void)
{
	const char	str[] = "Hello, world!";
	const char	*expected = &str[7];
	const char	*result = ft_strchr(str, 'w');

	assert(result == expected);
	printf("test_strchr_return_value passed.\n");
}

void	test_strchr_zero_length(void)
{
	const char	str[] = "No search should be done.";
	const char	*result = ft_strchr(str, 'Z');

	assert(result == NULL);
	printf("test_strchr_zero_length passed.\n");
}

void	test_strchr_repeated_char(void)
{
	const char	str[] = "Hello, world! Hello, universe!";
	const char	*result = ft_strchr(str, 'o');

	assert(result == &str[4] && *result == 'o');
	printf("test_strchr_repeated_char passed.\n");
}

int	main(void)
{
	test_strchr_found();
	test_strchr_not_found();
	test_strchr_first_char();
	test_strchr_find_null();
	test_strchr_return_value();
	test_strchr_zero_length();
	test_strchr_repeated_char();

	printf("All tests passed.\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:55:49 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 12:04:51 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

void	test_normal_case(void)
{
	char	text[] = "Hello, world!";
	char	*result;

	result = ft_strstr(text, "world!");
	assert(result == text + 7);
	printf("test_normal_case passed.\n");
}

void	test_needle_at_start(void)
{
	char	text[] = "Hello, world!";
	char	*result;

	result = ft_strstr(text, "Hello");
	assert(result == text);
	printf("test_needle_at_start passed.\n");
}

void	test_needle_at_end(void)
{
	char	text[] = "Hello, world!";
	char	*result;

	result = ft_strstr(text, "world!");
	assert(result == text + 7);
	printf("test_needle_at_end passed.\n");
}

void	test_no_occurrence(void)
{
	char	text[] = "Hello, world!";
	char	*result;

	result = ft_strstr(text, "planet");
	assert(result == NULL);
	printf("test_no_occurrence passed.\n");
}

void	test_empty_needle(void)
{
	char	text[] = "Hello, world!";
	char	*result;

	result = ft_strstr(text, "");
	assert(result == text);
	printf("test_empty_needle passed.\n");
}

void	test_empty_haystack(void)
{
	char	text[] = "";
	char	*result;

	result = ft_strstr(text, "Hello");
	assert(result == NULL);
	printf("test_empty_haystack passed.\n");
}

void	test_both_empty(void)
{
	char	text[] = "";
	char	*result;

	result = ft_strstr(text, "");
	assert(result == text);
	printf("test_both_empty passed.\n");
}

void	test_needle_longer_than_haystack(void)
{
	char	text[] = "Hi";
	char	*result;

	result = ft_strstr(text, "Hello");
	assert(result == NULL);
	printf("test_needle_longer_than_haystack passed.\n");
}

void	test_needle_same_as_haystack(void)
{
	char	text[] = "Hello";
	char	*result;

	result = ft_strstr(text, "Hello");
	assert(result == text);
	printf("test_needle_same_as_haystack passed.\n");
}

int	main(void)
{
	test_normal_case();
	test_needle_at_start();
	test_needle_at_end();
	test_no_occurrence();
	test_empty_needle();
	test_empty_haystack();
	test_both_empty();
	test_needle_longer_than_haystack();
	test_needle_same_as_haystack();

	printf("All tests passed!\n");
	return (0);
}

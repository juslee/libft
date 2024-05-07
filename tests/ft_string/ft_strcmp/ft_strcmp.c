/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:30:37 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 23:22:26 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strcmp_equal(void)
{
	const char	*str1 = "Hello, world!";
	const char	*str2 = "Hello, world!";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_equal passed.\n");
}

void	test_strcmp_first_less(void)
{
	const char	*str1 = "Hello, world!";
	const char	*str2 = "Hello, world?";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_first_less passed.\n");
}

void	test_strcmp_first_greater(void)
{
	const char	*str1 = "Hello, world?";
	const char	*str2 = "Hello, world!";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_first_greater passed.\n");
}

void	test_strcmp_empty_strings(void)
{
	const char	*str1 = "";
	const char	*str2 = "";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_empty_strings passed.\n");
}

void	test_strcmp_empty_and_non_empty(void)
{
	const char	*str1 = "";
	const char	*str2 = "Hello";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_empty_and_non_empty passed.\n");
}

void	test_strcmp_non_empty_and_empty(void)
{
	const char	*str1 = "Hello";
	const char	*str2 = "";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_non_empty_and_empty passed.\n");
}

void	test_strcmp_null(void)
{
	const char	*str1 = NULL;
	const char	*str2 = NULL;

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_null passed.\n");
}

void	test_strcmp_null_and_non_null(void)
{
	const char	*str1 = NULL;
	const char	*str2 = "Hello";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_null_and_non_null passed.\n");
}

void	test_strcmp_non_null_and_null(void)
{
	const char	*str1 = "Hello";
	const char	*str2 = NULL;

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_non_null_and_null passed.\n");
}

void	test_strcmp_null_and_empty(void)
{
	const char	*str1 = NULL;
	const char	*str2 = "";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_null_and_empty passed.\n");
}

void	test_strcmp_empty_and_null(void)
{
	const char	*str1 = "";
	const char	*str2 = NULL;

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_empty_and_null passed.\n");
}

void	test_strcmp_null_and_null(void)
{
	const char	*str1 = NULL;
	const char	*str2 = NULL;

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_null_and_null passed.\n");
}

void	test_strcmp_end_with_128(void)
{
	const char	*str1 = "test\200";
	const char	*str2 = "test\0";

	assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
	printf("test_strcmp_end_with_128 passed.\n");
}

int	main(void)
{
	test_strcmp_equal();
	test_strcmp_first_less();
	test_strcmp_first_greater();
	test_strcmp_empty_strings();
	test_strcmp_empty_and_non_empty();
	test_strcmp_non_empty_and_empty();
	test_strcmp_end_with_128();

	printf("All tests passed.\n");
	return 0;
}

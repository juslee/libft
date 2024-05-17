/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:09:23 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:38:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memchr_basic_find(void)
{
	const char	src[] = "Example string";
	const char	*result = ft_memchr(src, 'm', strlen(src));
	const char	*expected = memchr(src, 'm', strlen(src));

	assert(result != NULL);
	assert(*result == 'm');
	assert(*result == *expected);
	printf("test_memchr_basic_find passed.\n");
}

void	test_memchr_not_found(void)
{
	const char	src[] = "Test string";
	const char	*result = ft_memchr(src, 'z', strlen(src));

	assert(result == NULL);
	assert(result == memchr(src, 'z', strlen(src)));
	printf("test_memchr_not_found passed.\n");
}

void	test_memchr_return_value(void)
{
	const char	src[] = "Hello, world!";
	const char	*expected = &src[7];
	const char	*result = ft_memchr(src, 'w', strlen(src));
	const char	*result2 = memchr(src, 'w', strlen(src));

	assert(result == expected);
	assert(result == result2);
	printf("test_memchr_return_value passed.\n");
}

void	test_memchr_find_null(void)
{
	const char	src[] = "Find the null char";
	const int	target = '\0';
	const char	*result = ft_memchr(src, target, strlen(src) + 1);

	assert(result == &src[strlen(src)]);
	printf("test_memchr_find_null passed.\n");
}

void	test_memchr_zero_length(void)
{
	const char	src[] = "No search should be done.";
	const int	target = 'N';
	const char	*result = ft_memchr(src, target, 0);

	assert(result == NULL);
	printf("test_memchr_zero_length passed.\n");
}

void	test_memchr_find_null_char(void)
{
	const char	src[] = "Find the null char";
	const int	target = '\0';
	const char	*result = ft_memchr(src, target, strlen(src) + 1);

	assert(result == &src[strlen(src)]);
	printf("test_memchr_find_null_char passed.\n");
}

int	main(void)
{
	test_memchr_basic_find();
	test_memchr_not_found();
	test_memchr_return_value();
	test_memchr_find_null();
	test_memchr_zero_length();
	test_memchr_find_null_char();

	printf("All tests passed.\n");
	return (0);
}

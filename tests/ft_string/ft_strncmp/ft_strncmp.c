/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:58:52 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 15:48:41 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strncmp_equal_strings(void)
{
	const char	*s1 = "Hello, world!";
	const char	*s2 = "Hello, world!";
	const int	result = ft_strncmp(s1, s2, 13);

	assert(result == 0);
	assert(result == strncmp(s1, s2, 13));
	printf("test_strncmp_equal_strings passed.\n");
}

void	test_strncmp_different_strings(void)
{
	const char	*s1 = "Hello, world.";
	const char	*s2 = "Hello, world!";
	const int	result = ft_strncmp(s1, s2, 13);

	assert(result > 0);
	assert(result == strncmp(s1, s2, 13));
	printf("test_strncmp_different_strings passed.\n");
}

void	test_strncmp_less_than_n(void)
{
	const char	*s1 = "Hello, World!";
	const char	*s2 = "Hello, world!";
	const int	result = ft_strncmp(s1, s2, 13);

	assert(result != 0);
	assert(result < 0);
	assert(result == strncmp(s1, s2, 13));
	printf("test_strncmp_less_than_n passed.\n");
}

void	test_strncmp_prefix(void)
{
	const char	*s1 = "Hello";
	const char	*s2 = "Hello, world!";
	const int	result = ft_strncmp(s1, s2, 5);

	assert(result == 0);
	assert(result == strncmp(s1, s2, 5));
	printf("test_strncmp_prefix passed.\n");
}

void	test_strncmp_n_limit(void)
{
	const char	*s1 = "Hello, world";
	const char	*s2 = "Hello, worly";
	const int	result = ft_strncmp(s1, s2, 10);

	assert(result == 0);
	assert(result == strncmp(s1, s2, 10));
	printf("test_strncmp_n_limit passed.\n");
}

void	test_strncmp_empty_strings(void)
{
	const char	*s1 = "";
	const char	*s2 = "";
	const int	result = ft_strncmp(s1, s2, 0);

	assert(result == 0);
	assert(result == strncmp(s1, s2, 0));
	printf("test_strncmp_empty_strings passed.\n");
}

void	test_strncmp_null_strings(void)
{
	const char	*s1 = NULL;
	const char	*s2 = NULL;
	const int	result = ft_strncmp(s1, s2, 0);

	assert(result == 0);
	printf("test_strncmp_null_strings passed.\n");
}

int	main(void)
{
	test_strncmp_equal_strings();
	test_strncmp_different_strings();
	test_strncmp_less_than_n();
	test_strncmp_prefix();
	test_strncmp_n_limit();
	test_strncmp_empty_strings();
	test_strncmp_null_strings();

	printf("All tests passed.\n");
	return (0);
}

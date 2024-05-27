/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:49:08 by welee             #+#    #+#             */
/*   Updated: 2024/05/22 16:39:40 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

void	test_strlen_empty(void)
{
	const char		*str = "";
	const size_t	length = ft_strlen(str);

	assert(length == 0);
	printf("test_strlen_empty passed.\n");
}

void	test_strlen_basic(void)
{
	const char		*str = "Hello, world!";
	const size_t	length = ft_strlen(str);

	assert(length == strlen(str));
	printf("test_strlen_basic passed.\n");
}

void	test_strlen_long(void)
{
	const char		*str = "This is a long string.";
	const size_t	length = ft_strlen(str);

	assert(length == strlen(str));
	printf("test_strlen_long passed.\n");
}

void	test_strlen_whitespace(void)
{
	const char		*str = " \t\n";
	const size_t	length = ft_strlen(str);

	assert(length == strlen(str));
	printf("test_strlen_whitespace passed.\n");
}

// void	test_strlen_null(void)
// {
// 	const char		*str = NULL;
// 	const size_t	length = ft_strlen(str);

// 	assert(length == 0);
// 	printf("test_strlen_null passed.\n");
// }

void	test_strlen_null_byte(void)
{
	const char		*str = "Hello, world!\0w";
	const size_t	length = ft_strlen(str);

	assert(length == 13);
	printf("test_strlen_null_byte passed.\n");
}

int	main(void)
{
	test_strlen_empty();
	test_strlen_basic();
	test_strlen_long();
	test_strlen_whitespace();
	// test_strlen_null();
	test_strlen_null_byte();

	printf("All tests passed.\n");
	return (0);
}

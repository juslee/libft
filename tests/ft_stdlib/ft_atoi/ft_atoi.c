/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:56 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 16:47:24 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_atoi_basic(void)
{
	const char	*str = "42";
	const int	result = ft_atoi(str);

	assert(result == 42);
	assert(result == atoi(str));
	printf("test_atoi_basic passed.\n");
}

void	test_atoi_negative(void)
{
	const char	*str = "-42";
	const int	result = ft_atoi(str);

	assert(result == -42);
	assert(result == atoi(str));
	printf("test_atoi_negative passed.\n");
}

void	test_atoi_positive(void)
{
	const char	*str = "+42";
	const int	result = ft_atoi(str);

	assert(result == 42);
	assert(result == atoi(str));
	printf("test_atoi_positive passed.\n");
}

void	test_atoi_whitespace(void)
{
	const char	*str = " \t\n42";
	const int	result = ft_atoi(str);

	assert(result == 42);
	assert(result == atoi(str));
	printf("test_atoi_whitespace passed.\n");
}

void	test_atoi_long(void)
{
	const char	*str = "1234567890";
	const int	result = ft_atoi(str);

	assert(result == 1234567890);
	assert(result == atoi(str));
	printf("test_atoi_long passed.\n");
}

void	test_atoi_overflow(void)
{
	const char	*str = "2147483647";
	const int	result = ft_atoi(str);

	assert(result == 2147483647);
	assert(result == atoi(str));
	printf("test_atoi_overflow passed.\n");
}

void	test_atoi_underflow(void)
{
	const char	*str = "-2147483648";
	const int	result = ft_atoi(str);

	assert(result == -2147483648);
	assert(result == atoi(str));
	printf("test_atoi_underflow passed.\n");
}

void	test_atoi_null(void)
{
	const char	*str = NULL;
	const int	result = ft_atoi(str);

	assert(result == 0);
	printf("test_atoi_null passed.\n");
}

void	test_atoi_empty(void)
{
	const char	*str = "";
	const int	result = ft_atoi(str);

	assert(result == 0);
	assert(result == atoi(str));
	printf("test_atoi_empty passed.\n");
}

int	main(void)
{
	test_atoi_basic();
	test_atoi_negative();
	test_atoi_positive();
	test_atoi_whitespace();
	test_atoi_long();
	test_atoi_overflow();
	test_atoi_underflow();
	// test_atoi_null();
	test_atoi_empty();

	printf("All tests passed.\n");
	return (0);
}

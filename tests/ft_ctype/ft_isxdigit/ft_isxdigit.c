/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:29:31 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 14:05:39 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isxdigit_digit(void)
{
	int	c;

	c = '0';
	while (c < '9')
	{
		assert(ft_isxdigit(c) > 0 && isxdigit(c) > 0);
		++c;
	}
	printf("test_isxdigit_digit passed.\n");
}

void	test_isxdigit_lower(void)
{
	int	c;

	c = 'a';
	while (c < 'f')
	{
		assert(ft_isxdigit(c) > 0 && isxdigit(c) > 0);
		++c;
	}
	printf("test_isxdigit_lower passed.\n");
}

void	test_isxdigit_upper(void)
{
	int	c;

	c = 'A';
	while (c < 'F')
	{
		assert(ft_isxdigit(c) > 0 && isxdigit(c) > 0);
		++c;
	}
	printf("test_isxdigit_upper passed.\n");
}

void	test_isxdigit_non_hex(void)
{
	int	c;

	c = 0;
	while (c < '0')
	{
		assert(ft_isxdigit(c) == 0 && isxdigit(c) == 0);
		++c;
	}
	c = '9' + 1;
	while (c < 'A')
	{
		assert(ft_isxdigit(c) == 0 && isxdigit(c) == 0);
		++c;
	}
	c = 'F' + 1;
	while (c < 'a')
	{
		assert(ft_isxdigit(c) == 0 && isxdigit(c) == 0);
		++c;
	}
	c = 'f' + 1;
	while (c < 128)
	{
		assert(ft_isxdigit(c) == 0 && isxdigit(c) == 0);
		++c;
	}
	printf("test_isxdigit_non_hex passed.\n");
}

void	test_isxdigit_negative(void)
{
	int	c;

	c = -128;
	while (c < 0)
	{
		assert(ft_isxdigit(c) == 0 && isxdigit(c) == 0);
		++c;
	}
	printf("test_isxdigit_negative passed.\n");
}

int	main(void)
{
	test_isxdigit_digit();
	test_isxdigit_lower();
	test_isxdigit_upper();
	test_isxdigit_non_hex();
	test_isxdigit_negative();

	printf("All tests passed.\n");
	return (0);
}

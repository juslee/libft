/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:18:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:44:37 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isalnum_alpha(void)
{
	int	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		assert(ft_isalnum(c));
		++c;
	}
	c = 'A';
	while (c >= 'A' && c <= 'Z')
	{
		assert(ft_isalnum(c));
		++c;
	}
	printf("test_isalnum_alpha passed.\n");
}

void	test_isalnum_digit(void)
{
	int	c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		assert(ft_isalnum(c));
		++c;
	}
	printf("test_isalnum_digit passed.\n");
}

void	test_isalnum_non_alnum(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			;
		else
			assert(!ft_isalnum(c));
		++c;
	}
	printf("test_isalnum_non_alnum passed.\n");
}

void	test_isalpha_extended_ascii(void)
{
	int	c;

	c = 128;
	while (c < 256)
	{
		assert(!ft_isalnum(c));
		++c;
	}
	printf("test_isalnum_extended_ascii passed.\n");
}

int	main(void)
{
	test_isalnum_alpha();
	test_isalnum_digit();
	test_isalnum_non_alnum();

	printf("ft_isalnum: all tests passed\n");
	return (0);
}

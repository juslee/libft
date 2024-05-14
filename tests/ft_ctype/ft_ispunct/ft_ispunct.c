/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:26:56 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 14:02:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ispunct_punctuation(void)
{
	int	c;

	c = 33;
	while (c < 48)
	{
		assert(ft_ispunct(c) > 0 && ispunct(c) > 0);
		++c;
	}
	c = 58;
	while (c < 65)
	{
		assert(ft_ispunct(c) > 0 && ispunct(c) > 0);
		++c;
	}
	c = 91;
	while (c < 97)
	{
		assert(ft_ispunct(c) > 0 && ispunct(c) > 0);
		++c;
	}
	c = 123;
	while (c < 127)
	{
		assert(ft_ispunct(c) > 0 && ispunct(c) > 0);
		++c;
	}
	printf("test_ispunct_punctuation passed.\n");
}

void	test_ispunct_non_punctuation(void)
{
	int	c;

	c = 0;
	while (c < 33)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	c = 48;
	while (c < 58)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	c = 65;
	while (c < 91)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	c = 97;
	while (c < 123)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	c = 127;
	while (c < 256)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	printf("test_ispunct_non_punctuation passed.\n");
}

void	test_ispunct_negative(void)
{
	int	c;

	c = -128;
	while (c < 0)
	{
		assert(ft_ispunct(c) == 0 && ispunct(c) == 0);
		++c;
	}
	printf("test_ispunct_negative passed.\n");
}

int	main(void)
{
	test_ispunct_punctuation();
	test_ispunct_non_punctuation();
	test_ispunct_negative();

	printf("All tests passed.\n");
	return (0);
}

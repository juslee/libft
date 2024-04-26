/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:59:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:59:24 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isalpha_basic(void)
{
	int	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		assert(ft_isalpha(c));
		++c;
	}
	c = 'A';
	while (c >= 'A' && c <= 'Z')
	{
		assert(ft_isalpha(c));
		++c;
	}
	printf("test_isalpha_basic passed.\n");
}

void	test_isalpha_non_alpha(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
			;
		else
			assert(!ft_isalpha(c));
		++c;
	}
	printf("test_isalpha_non_alpha passed.\n");
}

void	test_isalpha_extended_ascii(void)
{
	int	c;

	c = 128;
	while (c < 256)
	{
		assert(!ft_isalpha(c));
		++c;
	}
	printf("test_isalpha_extended_ascii passed.\n");
}

int	main(void)
{
	test_isalpha_basic();
	test_isalpha_non_alpha();
	test_isalpha_extended_ascii();

	printf("ft_isalpha: all tests passed\n");
	return (0);
}

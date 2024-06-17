/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:34:56 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:04:43 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_islower_lowercase(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		assert(ft_islower(c));
		++c;
	}
	printf("test_islower_standard passed.\n");
}

void	test_islower_uppercase(void)
{
	int	c;

	c = 'A';
	while (c <= 'Z')
	{
		assert(!ft_islower(c));
		++c;
	}
	printf("test_islower_uppercase passed.\n");
}

void	test_islower_non_alpha(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if (c >= 'a' && c <= 'z')
			;
		else
			assert(!ft_islower(c));
		++c;
	}
	printf("test_islower_non_alpha passed.\n");
}

void	test_islower_extended_ascii(void)
{
	int	c;

	c = 128;
	while (c < 256)
	{
		assert(!ft_islower(c));
		++c;
	}
	printf("test_islower_extended_ascii passed.\n");
}

int	main(void)
{
	test_islower_lowercase();
	test_islower_uppercase();
	test_islower_non_alpha();
	test_islower_extended_ascii();
	printf("ft_islower: all tests passed\n");
	return (0);
}

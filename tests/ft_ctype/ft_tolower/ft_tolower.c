/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:01 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:55:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_tolower_alpha(void)
{
	int	c;

	c = 'A';
	while (c <= 'Z')
	{
		assert(ft_tolower(c) == tolower(c));
		++c;
	}
	printf("test_tolower_alpha passed.\n");
}

void	test_tolower_non_alpha(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if (c >= 'A' && c <= 'Z')
			;
		else
			assert(ft_tolower(c) == tolower(c));
		++c;
	}
	printf("test_tolower_non_alpha passed.\n");
}

void	test_tolower_extended_ascii(void)
{
	int	c;

	c = 128;
	while (c < 256)
	{
		assert(ft_tolower(c) == tolower(c));
		++c;
	}
	printf("test_tolower_extended_ascii passed.\n");
}

int	main(void)
{
	test_tolower_alpha();
	test_tolower_non_alpha();
	test_tolower_extended_ascii();

	printf("ft_tolower passed.\n");
	return (0);
}

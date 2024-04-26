/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:33:43 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:42:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isascii_standard(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		assert(ft_isascii(i));
		++i;
	}
	printf("test_isascii_standard passed.\n");
}

void	test_isascii_non_ascii(void)
{
	int	i;

	i = 128;
	while (i < 256)
	{
		assert(!ft_isascii(i));
		++i;
	}
	printf("test_isascii_non_ascii passed.\n");
}

void	test_isascii_negative(void)
{
	int	i;

	i = 256;
	while (i < 300)
	{
		assert(!ft_isascii(i));
		++i;
	}
	i = -1;
	while (i > -128)
	{
		assert(!ft_isascii(i));
		--i;
	}
	printf("test_isascii_negative passed.\n");
}

int	main(void)
{
	test_isascii_standard();
	test_isascii_non_ascii();
	test_isascii_negative();

	printf("ft_isascii: all tests passed\n");
	return (0);
}

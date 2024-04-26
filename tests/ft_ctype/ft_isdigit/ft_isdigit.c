/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:34:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:38:13 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isdigit_standard(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		assert(ft_isdigit(i));
		++i;
	}
	printf("test_isdigit_standard passed.\n");
}

void	test_isdigit_non_digit(void)
{
	int	i;

	i = 0;
	while (i < 127)
	{
		if (i >= '0' && i <= '9')
			;
		else
			assert(!ft_isdigit(i));
		++i;
	}
	printf("test_isdigit_non_digit passed.\n");
}

void	test_isdigit_extended_ascii(void)
{
	int	i;

	i = 128;
	while (i < 256)
	{
		assert(!ft_isdigit(i));
		++i;
	}
	printf("test_isdigit_extended_ascii passed.\n");
}

int	main(void)
{
	test_isdigit_standard();
	test_isdigit_non_digit();
	test_isdigit_extended_ascii();

	printf("ft_isdigit: all tests passed\n");
	return (0);
}

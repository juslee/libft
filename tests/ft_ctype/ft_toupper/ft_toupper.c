/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:41 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:55:46 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_toupper_alpha(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		assert(ft_toupper(c) == toupper(c));
		++c;
	}
	printf("test_toupper_alpha passed.\n");
}

void	test_toupper_non_alpha(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if (c >= 'a' && c <= 'z')
			;
		else
			assert(ft_toupper(c) == toupper(c));
		++c;
	}
	printf("test_toupper_non_alpha passed.\n");
}

void	test_toupper_extended_ascii(void)
{
	int	c;

	c = 128;
	while (c < 256)
	{
		assert(ft_toupper(c) == toupper(c));
		++c;
	}
	printf("test_toupper_extended_ascii passed.\n");
}

int	main(void)
{
	test_toupper_alpha();
	test_toupper_non_alpha();
	test_toupper_extended_ascii();

	printf("ft_toupper passed.\n");
	return (0);
}

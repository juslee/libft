/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:36:33 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:53:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isupper_uppercase(void)
{
	int	i;

	i = 'A';
	while (i <= 'Z')
	{
		assert(ft_isupper(i));
		++i;
	}
	printf("test_isupper_uppercase passed.\n");
}

void	test_isupper_lowercase(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		assert(!ft_isupper(i));
		++i;
	}
	printf("test_isupper_lowercase passed.\n");
}

void	test_isupper_non_alpha(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		if (i >= 'A' && i <= 'Z')
			;
		else
			assert(!ft_isupper(i));
		++i;
	}
	printf("test_isupper_non_alpha passed.\n");
}

void	test_isupper_extended_ascii(void)
{
	int	i;

	i = 128;
	while (i < 256)
	{
		assert(!ft_isupper(i));
		++i;
	}
	printf("test_isupper_extended_ascii passed.\n");
}

int	main(void)
{
	test_isupper_uppercase();
	test_isupper_lowercase();
	test_isupper_non_alpha();
	test_isupper_extended_ascii();

	printf("ft_isupper: all tests passed\n");
	return (0);
}

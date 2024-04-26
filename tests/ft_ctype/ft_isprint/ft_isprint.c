/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:35:32 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:49:31 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isprint_standard(void)
{
	int	i;

	i = 32;
	while (i <= 126)
	{
		assert(ft_isprint(i));
		++i;
	}
	printf("test_isprint_standard passed.\n");
}

void	test_isprint_non_print(void)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		assert(!ft_isprint(i));
		++i;
	}
	i = 127;
	while (i < 256)
	{
		assert(!ft_isprint(i));
		++i;
	}
	printf("test_isprint_non_print passed.\n");
}

int	main(void)
{
	test_isprint_standard();
	test_isprint_non_print();

	printf("ft_isprint test passed.\n");
	return (0);
}

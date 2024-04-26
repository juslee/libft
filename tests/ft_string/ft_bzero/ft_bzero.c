/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:06:02 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 17:39:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_bzero_basic(void)
{
	char	buffer[10];
	size_t	i;

	ft_bzero(buffer, sizeof(buffer));
	i = 0;
	while (i < sizeof(buffer))
	{
		assert(buffer[i] == 0);
		++i;
	}
	printf("test_bzero_basic passed.\n");
}

void	test_bzero_zero_length(void)
{
	char	buffer[10];
	size_t	i;

	memset(buffer, 'x', sizeof(buffer));
	ft_bzero(buffer, 0);
	i = 0;
	while (i < sizeof(buffer))
	{
		assert(buffer[i] == 'x');
		++i;
	}
	printf("test_bzero_zero_length passed.\n");
}

void	test_bzero_boundary(void)
{
	char	buffer[20];
	int		i;

	memset(buffer, 'a', sizeof(buffer));
	ft_bzero(buffer + 5, 10);
	i = 0;
	while (i < 5)
	{
		assert(buffer[i] == 'a');
		++i;
	}
	while (i < 15)
	{
		assert(buffer[i] == 0);
		++i;
	}
	while (i < 20)
	{
		assert(buffer[i] == 'a');
		++i;
	}
	printf("test_bzero_boundary passed.\n");
}

int	main(void)
{
	test_bzero_basic();
	test_bzero_zero_length();
	test_bzero_boundary();

	printf("All tests passed.\n");
	return 0;
}

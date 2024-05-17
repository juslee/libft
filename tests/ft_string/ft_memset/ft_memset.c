/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:40:37 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 17:45:07 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memset_basic_fill(void)
{
	char	buffer[10];
	size_t	i;

	ft_memset(buffer, 'A', sizeof(buffer));
	i = 0;
	while (i < sizeof(buffer))
	{
		assert(buffer[i] == 'A');
		++i;
	}
	printf("test_memset_basic_fill passed.\n");
}

void	test_memset_return_value(void)
{
	char		buffer[10];
	const char	*result = ft_memset(buffer, 'B', sizeof(buffer));

	assert(result == buffer);
	printf("test_memset_return_value passed.\n");
}

void	test_memset_zero_length(void)
{
	char	buffer[10] = {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'};
	size_t	i;

	ft_memset(buffer, 'Y', 0);
	i = 0;
	while (i < sizeof(buffer))
	{
		assert(buffer[i] == 'x');
		++i;
	}
	printf("test_memset_zero_length passed.\n");
}

void	test_memset_non_char_value(void)
{
	int				buffer[10];
	unsigned char	*byte_pointer = (unsigned char *)buffer;
	size_t			i;

	ft_memset(buffer, 0xAB, sizeof(buffer));
	i = 0;
	while (i < sizeof(buffer))
	{
		assert(byte_pointer[i] == 0xAB);
		++i;
	}
	printf("test_memset_non_char_value passed.\n");
}

void	test_memset_boundary(void)
{
	char	buffer[15];
	size_t	i;

	ft_memset(buffer, 0, sizeof(buffer));
	ft_memset(buffer, 'Z', 5);
	i = 0;
	while (i < 5)
	{
		assert(buffer[i] == 'Z');
		++i;
	}
	i = 5;
	while (i < sizeof(buffer))
	{
		assert(buffer[i] == 0);
		++i;
	}
	printf("test_memset_boundary passed.\n");
}

void	test_memset_null_pointer(void)
{
	ft_memset(NULL, 'A', 10);
	printf("test_memset_null_pointer passed.\n");
}

void	test_memset_evaluator(void)
{
	char	*s = NULL;

	ft_memset(s, 'A', 5);
	memset(s, 'A', 5);
	printf("test_memset_evaluator passed.\n");
}

int	main(void)
{
	test_memset_basic_fill();
	test_memset_return_value();
	test_memset_zero_length();
	test_memset_non_char_value();
	test_memset_boundary();
	test_memset_null_pointer();

	printf("All tests passed.\n");
	return 0;
}

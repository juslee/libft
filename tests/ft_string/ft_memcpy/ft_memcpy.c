/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:09:38 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 16:20:20 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memcpy_basic(void)
{
	const char	src[] = "Hello, world!";
	char		dest[50];

	printf("func: ft_memcpy(dest, \"%s\", sizeof(src))\n", src);
	ft_memcpy(dest, src, sizeof(src));
	assert(strcmp(dest, src) == 0);
	printf("test_memcpy_basic passed.\n");
}

void	test_memcpy_zero_length(void)
{
	const char	src[] = "No copy should happen.";
	char		dest[50] = "Original string";

	printf("func: ft_memcpy(dest, \"%s\", 0)\n", src);
	ft_memcpy(dest, src, 0);
	assert(strcmp(dest, "Original string") == 0);
	printf("test_memcpy_zero_length passed.\n");
}

void	test_memcpy_boundary(void)
{
	const char	src[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char		dest[10];
	int			i;

	printf("func: ft_memcpy(dest, src, 10)\n");
	ft_memcpy(dest, src, 10);
	i = 0;
	while (i < 10)
	{
		assert(src[i] == dest[i]);
		++i;
	}
	printf("test_memcpy_boundary passed.\n");
}

void	test_memcpy_full_block(void)
{
	char	src[256];
	char	dest[256];
	int		i;

	printf("func: ft_memcpy(dest, src, 256)\n");
	i = 0;
	while (i < 256)
	{
		src[i] = (char) i;
		++i;
	}
	ft_memcpy(dest, src, 256);
	i = 0;
	while (i < 256)
	{
		assert(dest[i] == src[i]);
		++i;
	}
	printf("test_memcpy_full_block passed.\n");
}

int	main(void)
{
	test_memcpy_basic();
	test_memcpy_zero_length();
	test_memcpy_boundary();
	test_memcpy_full_block();

	printf("All tests passed.\n");
	return (0);
}

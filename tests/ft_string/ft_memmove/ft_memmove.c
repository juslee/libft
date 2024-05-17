/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:49:26 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:11:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memmove_basic(void)
{
	const char	src[] = "Hello, world!";
	char		dest[50];

	printf("func: ft_memmove(dest, \"%s\", sizeof(src))\n", src);
	ft_memmove(dest, src, sizeof(src));
	assert(strcmp(dest, src) == 0);
	printf("test_memmove_basic passed.\n");
}

void	test_memmove_zero_length(void)
{
	const char	src[] = "No move should happen.";
	char		dest[50] = "Original string";

	printf("func: ft_memcpy(dest, \"%s\", 0)\n", src);
	ft_memmove(dest, src, 0);
	assert(strcmp(dest, "Original string") == 0);
	printf("test_memmove_zero_length passed.\n");
}

void	test_memmove_overlap(void)
{
	char	buffer[20] = "OverlappingMove";

	ft_memmove(buffer + 11, buffer, 11);
	assert(memcmp(buffer + 11, "Overlapping", 11) == 0);
	printf("test_memmove_overlap forward passed.\n");

	memcpy(buffer, "OverlappingMove", 20);
	ft_memmove(buffer, buffer + 11, 4);
	assert(memcmp(buffer, "MovelappingMove", 10) == 0);
	printf("test_memmove_overlap backward passed.\n");
}

void	test_memmove_boundary(void)
{
	const char	src[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char		dest[10];
	int			i;

	ft_memmove(dest, src, 10);
	i = 0;
	while (i < 10)
	{
		assert(src[i] == dest[i]);
		++i;
	}
	printf("test_memmove_boundary passed.\n");
}

void	test_memmove_full_block(void)
{
	char	src[256];
	char	dest[256];
	int		i;

	i = 0;
	while (i < 256)
	{
		src[i] = (char) i;
		++i;
	}

	ft_memmove(dest, src, 256);

	i = 0;
	while (i < 256)
	{
		assert(dest[i] == src[i]);
		++i;
	}
	printf("test_memmove_full_block passed.\n");
}

int	main(void)
{
	test_memmove_basic();
	test_memmove_zero_length();
	test_memmove_overlap();
	test_memmove_boundary();
	test_memmove_full_block();

	printf("All tests passed.\n");
	return (0);
}

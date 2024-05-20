/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:09:38 by welee             #+#    #+#             */
/*   Updated: 2024/05/20 18:57:57 by welee            ###   ########.fr       */
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

// void	test_memcpy_null(void)
// {
// 	ft_memcpy(NULL, NULL, 0);
// 	memcpy(NULL, NULL, 0);
// 	printf("test_memcpy_null passed.\n");
// }

// void	test_memcpy_null_3(void)
// {
// 	ft_memcpy(NULL, NULL, 3);
// 	memcpy(NULL, NULL, 3);
// 	printf("test_memcpy_null passed.\n");
// }

// void	test_memcpy_n_bigger_than_src(void)
// {
// 	const char	src[] = "Hello, world!";
// 	// char		dest2[20];
// 	char		dest[20];

// 	ft_memcpy(dest, src, sizeof(dest) + 1);
// 	// memcpy(dest2, src, sizeof(dest) + 1);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	assert(strcmp(dest, src) == 0);
// 	printf("test_memcpy_n_bigger_than_src passed.\n");
// }

// void	test_memcpy_segv(void)
// {
// 	printf("func: ft_memcpy(\"            \", NULL, 17)\n");
// 	ft_memcpy("            ", ((void *)0), 17);
// 	printf("func: memcpy(\"            \", NULL, 17)\n");
// 	memcpy("            ", ((void *)0), 17);
// 	printf("test_memcpy_segv passed.\n");
// }

int	main(void)
{
	test_memcpy_basic();
	test_memcpy_zero_length();
	test_memcpy_boundary();
	test_memcpy_full_block();
	// test_memcpy_null();
	// test_memcpy_null_3();
	// test_memcpy_n_bigger_than_src();
	// test_memcpy_segv();

	printf("All tests passed.\n");
	return (0);
}

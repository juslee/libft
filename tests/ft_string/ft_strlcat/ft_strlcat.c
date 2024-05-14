/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:34:19 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 14:08:25 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strlcat_basic(void)
{
	char			dst[20] = "Hello";
	const char		*src = ", world!";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(ft_strcmp(dst, "Hello, world!") == 0);
	assert(result == ft_strlen("Hello, world!"));
	printf("test_strlcat_basic passed.\n");
}

void	test_strlcat_buffer_too_small(void)
{
	char			dst[11] = "Hello";
	const char		*src = ", world!";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(ft_strcmp(dst, "Hello, wor") == 0);
	assert(result == ft_strlen("Hello") + ft_strlen(src));
	printf("test_strlcat_buffer_too_small passed.\n");
}

void	test_strlcat_exact_fit(void)
{
	char			dst[12] = "Hello";
	const char		*src = ", world!";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(ft_strcmp(dst, "Hello, worl") == 0);
	assert(result == 13);
	printf("test_strlcat_exact_fit passed.\n");
}

void	test_strlcat_zero_length(void)
{
	char			dst[10] = "Hello";
	const char		*src = "";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(ft_strcmp(dst, "Hello") == 0);
	assert(result == ft_strlen("Hello"));
	printf("test_strlcat_zero_length passed.\n");
}

int	main(void)
{
	test_strlcat_basic();
	test_strlcat_buffer_too_small();
	test_strlcat_exact_fit();
	test_strlcat_zero_length();

	printf("All tests passed.\n");
	return (0);
}

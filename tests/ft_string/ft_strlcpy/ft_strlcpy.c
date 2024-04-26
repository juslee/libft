/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:48:25 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 20:59:05 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strlcpy_basic(void)
{
	char			dst[20];
	const char		*src = "Hello, world!";
	const size_t	result = ft_strlcpy(dst, src, sizeof(dst));

	assert(strcmp(dst, src) == 0);
	assert(result == strlen(src));
	printf("test_strlcpy_basic passed.\n");
}

void	test_strlcpy_buffer_too_small(void)
{
	char			dst[6];
	const char		*src = "Hello, world!";
	const size_t	result = ft_strlcpy(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello") == 0);
	assert(result == strlen(src));
	printf("test_strlcpy_buffer_too_small passed.\n");
}

void	test_strlcpy_exact_fit(void)
{
	char			dst[6];
	const char		*src = "Hello";
	const size_t	result = ft_strlcpy(dst, src, sizeof(dst));

	assert(strcmp(dst, src) == 0);
	assert(result == strlen(src));
	printf("test_strlcpy_exact_fit passed.\n");
}

void	test_strlcpy_zero_length(void)
{
	char			dst[10];
	const char		*src = "";
	const size_t	result = ft_strlcpy(dst, src, sizeof(dst));

	assert(strcmp(dst, "") == 0);
	assert(result == 0);
	printf("test_strlcpy_zero_length passed.\n");
}

int	main(void)
{
	test_strlcpy_basic();
	test_strlcpy_buffer_too_small();
	test_strlcpy_exact_fit();
	test_strlcpy_zero_length();

	printf("All tests passed.\n");
	return (0);
}

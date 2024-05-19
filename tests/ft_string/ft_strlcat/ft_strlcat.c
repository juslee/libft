/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:34:19 by welee             #+#    #+#             */
/*   Updated: 2024/05/19 09:38:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
// #include <bsd/string.h>
#include "libft.h"

void	test_strlcat_basic(void)
{
	char		dst[20] = "Hello";
	const char	*src = ", world!";
	size_t		result;

	// Testing ft_strlcat
	result = ft_strlcat(dst, src, sizeof(dst));
	assert(strcmp(dst, "Hello, world!") == 0);
	assert(result == strlen("Hello") + strlen(src)); // Expected total length
	printf("ft_strlcat: %zu\n", result);

	// // Reset dst for standard strlcat test
	// strcpy(dst, "Hello");

	// // Testing standard strlcat
	// size_t std_result = strlcat(dst, src, sizeof(dst));
	// assert(strcmp(dst, "Hello, world!") == 0);
	// assert(std_result == strlen("Hello") + strlen(src));
	// printf("strlcat: %zu\n", std_result);

	// // Asserting both results are the same
	// assert(result == std_result);
	printf("test_strlcat_basic passed.\n");
}

void	test_strlcat_buffer_too_small(void)
{
	char			dst[11] = "Hello";
	const char		*src = ", world!";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello, wor") == 0);
	assert(result == ft_strlen("Hello") + ft_strlen(src));
	printf("ft_strlcat: %zu\n", result);

	// // Reset dst for standard strlcat test
	// strcpy(dst, "Hello");

	// const size_t std_result = strlcat(dst, src, sizeof(dst));
	// assert(strcmp(dst, "Hello, wor") == 0);
	// assert(std_result == strlen("Hello") + strlen(src));
	// printf("strlcat: %zu\n", std_result);

	// assert(result == std_result);
	printf("test_strlcat_buffer_too_small passed.\n");
}

void	test_strlcat_exact_fit(void)
{
	char			dst[12] = "Hello";
	const char		*src = ", world!";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello, worl") == 0);
	assert(result == 13);
	printf("ft_strlcat: %zu\n", result);

	// // Reset dst for standard strlcat test
	// strcpy(dst, "Hello");

	// const size_t std_result = strlcat(dst, src, sizeof(dst));
	// assert(strcmp(dst, "Hello, worl") == 0);
	// assert(std_result == 13);
	// printf("strlcat: %zu\n", std_result);

	// assert(result == std_result);
	printf("test_strlcat_exact_fit passed.\n");
}

void	test_strlcat_zero_length(void)
{
	char			dst[10] = "Hello";
	const char		*src = "";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello") == 0);
	assert(result == ft_strlen("Hello"));
	printf("ft_strlcat: %zu\n", result);

	// // Reset dst for standard strlcat test
	// strcpy(dst, "Hello");

	// const size_t std_result = strlcat(dst, src, sizeof(dst));
	// assert(strcmp(dst, "Hello") == 0);
	// assert(std_result == strlen("Hello"));
	// printf("strlcat: %zu\n", std_result);

	// assert(result == std_result);
	printf("test_strlcat_zero_length passed.\n");
}

void	test_strlcat_null_dest_and_src(void)
{
	char			*dst = NULL;
	const char		*src = NULL;
	const size_t	result = ft_strlcat(dst, src, 0);
	// const size_t	std_result = strlcat(dst, src, 0);

	assert(dst == NULL);
	assert(result == 0);
	// assert(result == std_result);
	printf("test_strlcat_null_dest_and_src passed.\n");
}

void	test_strlcat_null_dest(void)
{
	char			*dst = NULL;
	const char		*src = "Hello";
	const size_t	result = ft_strlcat(dst, src, 0);
	// const size_t	std_result = strlcat(dst, src, 0);

	printf("ft_strlcat: %zu\n", result);
	assert(dst == NULL);
	assert(result == ft_strlen(src));
	// assert(result == std_result);
	printf("test_strlcat_null_dest passed.\n");
}

// ft_strlcat does not handle NULL src
// void	test_strlcat_null_src(void)
// {
// 	char			dst[10] = "Hello";
// 	const char		*src = NULL;
// 	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

// 	assert(strcmp(dst, "Hello") == 0);
// 	assert(result == ft_strlen("Hello"));
// 	// assert(result == strlcat(dst, src, sizeof(dst)));
// 	printf("test_strlcat_null_src passed.\n");
// }

void	test_strlcat_empty_dest(void)
{
	char			dst[10] = "";
	const char		*src = "Hello";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello") == 0);
	assert(result == ft_strlen("Hello"));
	// assert(result == strlcat(dst, src, sizeof(dst)));
	printf("test_strlcat_empty_dest passed.\n");
}

void	test_strlcat_empty_src(void)
{
	char			dst[10] = "Hello";
	const char		*src = "";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "Hello") == 0);
	assert(result == ft_strlen("Hello"));
	// assert(result == strlcat(dst, src, sizeof(dst)));
	printf("test_strlcat_empty_src passed.\n");
}

void	test_strlcat_empty_dest_and_src(void)
{
	char			dst[10] = "";
	const char		*src = "";
	const size_t	result = ft_strlcat(dst, src, sizeof(dst));

	assert(strcmp(dst, "") == 0);
	assert(result == 0);
	// assert(result == strlcat(dst, src, sizeof(dst)));
	printf("test_strlcat_empty_dest_and_src passed.\n");
}

int	main(void)
{
	test_strlcat_basic();
	test_strlcat_buffer_too_small();
	test_strlcat_exact_fit();
	test_strlcat_zero_length();
	test_strlcat_null_dest_and_src();
	test_strlcat_null_dest();
	// test_strlcat_null_src();
	test_strlcat_empty_dest();
	test_strlcat_empty_src();
	test_strlcat_empty_dest_and_src();

	printf("All tests passed.\n");
	return (0);
}

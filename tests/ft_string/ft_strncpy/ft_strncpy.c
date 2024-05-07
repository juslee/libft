/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:40:18 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 11:54:42 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_normal_copy(void)
{
	char		dest[50];
	const char	*src = "Hello World";

	ft_strncpy(dest, src, 5);
	assert(ft_strncmp(dest, "Hello", 5) == 0);
	printf("test_normal_copy passed.\n");
}

void	test_exact_length_copy(void)
{
	char		dest[50];
	const char	*src = "Hello";

	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	assert(ft_strcmp(dest, "Hello") == 0);
	printf("test_exact_length_copy passed.\n");
}

void	test_short_source_copy(void)
{
	char		dest[50] = {0};
	const char	*src = "Hi";

	ft_strncpy(dest, src, 10);
	assert(ft_strcmp(dest, "Hi") == 0);
	assert(dest[3] == '\0');
	printf("test_short_source_copy passed.\n");
}

void	test_zero_length_copy(void)
{
	char		dest[50] = "Original";
	const char	*src = "Hello World";

	ft_strncpy(dest, src, 0);
	assert(ft_strcmp(dest, "Original") == 0);
	printf("test_zero_length_copy passed.\n");
}

void	test_copy_empty_string(void)
{
	char		dest[50] = "Original";
	const char	*src = "";

	ft_strcpy(dest, src);
	assert(strcmp(dest, src) == 0);
	printf("test_copy_empty_string passed.\n");
}

void	test_boundary_test(void)
{
	char	dest[12] = {0};
	const char	*src = "Hello World";

	ft_strncpy(dest, src, 11);
	assert(ft_strcmp(dest, "Hello World") == 0);
	assert(dest[11] == '\0');
	printf("test_boundary_test passed.\n");
}

int	main(void)
{
	test_normal_copy();
	test_exact_length_copy();
	test_short_source_copy();
	test_zero_length_copy();
	test_copy_empty_string();
	test_boundary_test();

	printf("All tests passed!\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:01:08 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 11:25:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_basic_concatenation(void)
{
	char dest[50] = "Hello";
	const char *src = " World";

	ft_strcat(dest, src);
	assert(ft_strcmp(dest, "Hello World") == 0);
	printf("test_basic_concatenation passed.\n");
}

void	test_concat_with_empty_src(void)
{
	char		dest[50] = "Hello";
	const char	*src = "";

	ft_strcat(dest, src);
	assert(ft_strcmp(dest, "Hello") == 0);
	printf("test_concat_with_empty_src passed.\n");
}

void	test_concat_with_empty_dest(void)
{
	char		dest[50] = "";
	const char	*src = "World";

	ft_strcat(dest, src);
	assert(ft_strcmp(dest, "World") == 0);
	printf("test_concat_with_empty_dest passed.\n");
}

void	test_concat_two_empty_strings(void)
{
	char		dest[50] = "";
	const char	*src = "";

	ft_strcat(dest, src);
	assert(ft_strcmp(dest, "") == 0);
	printf("test_concat_two_empty_strings passed.\n");
}

void	test_boundary_buffer_size(void)
{
	char		dest[11] = "Hello";
	const char	*src = " World";

	ft_strcat(dest, src);
	assert(strcmp(dest, "Hello World") == 0);
	printf("test_boundary_buffer_size passed.\n");
}

void	test_stress_concat(void)
{
	char	dest[1000] = "Start";
	int		i;

	i = 0;
	while (i < 100)
	{
		ft_strcat(dest, "x");
		i++;
	}
	assert(ft_strlen(dest) == 105);
	printf("test_stress_concat passed.\n");
}

int	main(void)
{
	test_basic_concatenation();
	test_concat_with_empty_src();
	test_concat_with_empty_dest();
	test_concat_two_empty_strings();
	test_boundary_buffer_size();
	test_stress_concat();

	printf("All tests passed!\n");
	return (0);
}

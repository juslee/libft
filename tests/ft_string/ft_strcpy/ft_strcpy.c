/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:53:25 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:19:35 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_strcpy_basic(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];

	ft_strcpy(dest, src);
	assert(strcmp(dest, src) == 0);

	printf("test_strcpy_basic passed.\n");
}

void	test_strcpy_empty_string(void)
{
	char	src[] = "";
	char	dest[50];

	ft_strcpy(dest, src);
	assert(strcmp(dest, src) == 0);

	printf("test_strcpy_empty_string passed.\n");
}

void	test_strcpy_return_value(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];
	char	*result;

	result = ft_strcpy(dest, src);
	assert(result == dest);

	printf("test_strcpy_return_value passed.\n");
}

void	test_strcpy_overlap(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];
	char	*result;

	result = ft_strcpy(dest, src + 7);
	assert(result == dest);
	assert(strcmp(dest, "world!") == 0);

	printf("test_strcpy_overlap passed.\n");
}

int	main(void)
{
	test_strcpy_basic();
	test_strcpy_empty_string();
	test_strcpy_return_value();
	test_strcpy_overlap();

	printf("All tests passed.\n");
	return (0);
}

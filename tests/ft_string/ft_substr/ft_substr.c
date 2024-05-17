/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:58:51 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:28:35 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_substr_normal(void)
{
	const char	*str = "Hello World";
	const char	*result = ft_substr(str, 6, 5);

	assert(strcmp(result, "World") == 0);
	// free(result);
	printf("test_ft_substr_normal passed.\n");
}

void	test_ft_substr_start_beyond_length(void)
{
	const char	*str = "Hello";
	const char	*result = ft_substr(str, 10, 3);

	assert(strcmp(result, "") == 0);
	// free(result);
	printf("test_ft_substr_start_beyond_length passed.\n");
}

void	test_ft_substr_large_length(void)
{
	const char	*str = "Hello";
	const char	*result = ft_substr(str, 2, 10);

	assert(strcmp(result, "llo") == 0);
	// free(result);
	printf("test_ft_substr_large_length passed.\n");
}

void	test_ft_substr_start_zero(void)
{
	const char	*str = "Example";
	const char	*result = ft_substr(str, 0, 4);

	assert(strcmp(result, "Exam") == 0);
	// free(result);
	printf("test_ft_substr_start_zero passed.\n");
}

void	test_ft_substr_null_input(void)
{
	const char	*result = ft_substr(NULL, 5, 10);

	assert(result == NULL);
	printf("test_ft_substr_null_input passed.\n");
}

int	main(void)
{
	test_ft_substr_normal();
	test_ft_substr_start_beyond_length();
	test_ft_substr_large_length();
	test_ft_substr_start_zero();
	test_ft_substr_null_input();

	printf("All tests passed.\n");
	return (0);
}

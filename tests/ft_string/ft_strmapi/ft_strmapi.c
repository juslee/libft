/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:21:58 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 22:34:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

char	test_func(unsigned int i, char c)
{
	return (c + i);
}

void	test_increment_normal(void)
{
	char const	*test_str = "abcdef";
	char const	*expected_result = "acegik";
	char		*result;

	result = ft_strmapi(test_str, test_func);
	assert(strcmp(result, expected_result) == 0);
	printf("Test Increment Normal Passed: %s -> %s\n", test_str, result);
	free(result);
}

void	test_increment_empty(void)
{
	char const	*empty_str = "";
	char const	*expected_result = "";
	char		*result;

	result = ft_strmapi(empty_str, test_func);
	assert(strcmp(result, expected_result) == 0);
	printf("Test Increment Empty Passed: \"%s\" -> \"%s\"\n", empty_str,
		result);
	free(result);
}

void	test_null_function(void)
{
	char const	*test_str = "abcdef";
	char		*result;

	result = ft_strmapi(test_str, NULL);
	assert(result == NULL);
	printf("Test Null Function Pointer Passed\n");
}

void	test_null_string(void)
{
	char	*result;

	result = ft_strmapi(NULL, test_func);
	assert(result == NULL);
	printf("Test Null String Passed\n");
}

int	main(void)
{
	test_increment_normal();
	test_increment_empty();
	test_null_function();
	test_null_string();

	printf("All tests completed successfully.\n");
	return (0);
}

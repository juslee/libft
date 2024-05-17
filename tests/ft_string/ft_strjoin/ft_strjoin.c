/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:21:04 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 10:11:28 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_strjoin_basic(void)
{
	char	*s1 = "Hello";
	char	*s2 = "World";
	char	*result = ft_strjoin(s1, s2);

	assert(strcmp(result, "HelloWorld") == 0);
	free(result);
	printf("test_ft_strjoin_basic passed.\n");
}

void	test_ft_strjoin_with_empty(void)
{
	char	*s1 = "Hello";
	char	*s2 = "";
	char	*result = ft_strjoin(s1, s2);

	assert(strcmp(result, "Hello") == 0);
	free(result);
	result = ft_strjoin(s2, s1);
	assert(strcmp(result, "Hello") == 0);
	free(result);
	printf("test_ft_strjoin_with_empty passed.\n");
}

void	test_ft_strjoin_with_null(void)
{
	char	*s1;
	char	*result;

	s1 = strcpy(s1, "Hello");
	result = ft_strjoin(s1, NULL);
	assert(result != NULL && strcmp(result, "Hello") == 0);
	free(result);
	result = ft_strjoin(NULL, s1);
	assert(result != NULL && strcmp(result, "Hello") == 0);
	free(result);
	result = ft_strjoin(NULL, NULL);
	assert(result == NULL);
	free(result);
	printf("test_ft_strjoin_with_null passed.\n");
}

void	test_ft_strjoin_special_chars(void)
{
	const char	*s1 = "Hello ";
	const char	*s2 = "World\n";
	char		*result = ft_strjoin(s1, s2);

	assert(strcmp(result, "Hello World\n") == 0);
	free(result);
	printf("test_ft_strjoin_special_chars passed.\n");
}

int	main(void)
{
	test_ft_strjoin_basic();
	test_ft_strjoin_with_empty();
	test_ft_strjoin_with_null();
	test_ft_strjoin_special_chars();

	printf("All tests passed.\n");
	return (0);
}

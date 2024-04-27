/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:27:30 by welee             #+#    #+#             */
/*   Updated: 2024/04/27 13:44:39 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_ft_strtrim_basic(void)
{
	char	*s1 = "xxHello Worldxx";
	char	*set = "x";
	char	*result = ft_strtrim(s1, set);

	assert(strcmp(result, "Hello World") == 0);
	free(result);
	printf("test_ft_strtrim_basic passed.\n");
}

void	test_ft_strtrim_no_trim_needed(void)
{
	char	*s1 = "Hello World";
	char	*set = "x";
	char	*result = ft_strtrim(s1, set);

	assert(strcmp(result, "Hello World") == 0);
	free(result);
	printf("test_ft_strtrim_no_trim_needed passed.\n");
}

void	test_ft_strtrim_all_trim(void)
{
	char	*s1 = "xxxxx";
	char	*set = "x";
	char	*result = ft_strtrim(s1, set);

	assert(strcmp(result, "") == 0);
	free(result);
	printf("test_ft_strtrim_all_trim passed.\n");
}

void	test_ft_strtrim_empty_input(void)
{
	char	*s1 = "";
	char	*set = "x";
	char	*result = ft_strtrim(s1, set);

	assert(strcmp(result, "") == 0);
	free(result);

	s1 = "Hello World";
	set = "";
	result = ft_strtrim(s1, set);
	assert(strcmp(result, "Hello World") == 0);
	free(result);

	printf("test_ft_strtrim_empty_input passed.\n");
}

void	test_ft_strtrim_null_input(void)
{
	char	*result = ft_strtrim(NULL, "x");

	assert(result == NULL);
	result = ft_strtrim("Hello World", NULL);
	assert(result == NULL);
	result = ft_strtrim(NULL, NULL);
	assert(result == NULL);
	printf("test_ft_strtrim_null_input passed.\n");
}

int	main(void)
{
	test_ft_strtrim_basic();
	test_ft_strtrim_no_trim_needed();
	test_ft_strtrim_all_trim();
	test_ft_strtrim_empty_input();
	test_ft_strtrim_null_input();

	printf("All tests passed.\n");
	return (0);
}

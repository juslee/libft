/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:31:37 by welee             #+#    #+#             */
/*   Updated: 2024/05/16 17:36:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

// Helper function to count elements in the returned array
size_t	count_splits(char **array)
{
	size_t	count = 0;

	while (array && array[count])
		count++;
	return (count);
}

// Define test functions here
void	test_ft_split_basic(void)
{
	char	*s = "Hello world from the other side";
	char	c = ' ';
	char	**result = ft_split(s, c);
	int		i;

	assert(strcmp(result[0], "Hello") == 0);
	assert(strcmp(result[1], "world") == 0);
	assert(strcmp(result[2], "from") == 0);
	assert(strcmp(result[3], "the") == 0);
	assert(strcmp(result[4], "other") == 0);
	assert(strcmp(result[5], "side") == 0);
	assert(result[6] == NULL);
	i = 0;
	while (result[i])
	{
		free(result[i]);
		++i;
	}
	free(result);
	printf("test_ft_split_basic passed.\n");
}

void	test_ft_split_no_delimiter(void)
{
	char	*s = "HelloWorld";
	char	c = ' ';
	char	**result = ft_split(s, c);
	int		i;

	assert(strcmp(result[0], "HelloWorld") == 0);
	assert(result[1] == NULL);
	i = 0;
	while (result[i])
	{
		free(result[i]);
		++i;
	}
	free(result);
	printf("test_ft_split_no_delimiter passed.\n");
}

void	test_ft_split_consecutive_delimiters(void)
{
	char	*s = "Hello  world  from C";
	char	c = ' ';
	char	**result = ft_split(s, c);
	int		i;

	assert(strcmp(result[0], "Hello") == 0);
	assert(strcmp(result[1], "world") == 0);
	assert(strcmp(result[2], "from") == 0);
	assert(strcmp(result[3], "C") == 0);
	assert(result[4] == NULL);
	i = 0;
	while (result[i])
	{
		free(result[i]);
		++i;
	}
	free(result);
	printf("test_ft_split_consecutive_delimiters passed.\n");
}

void	test_ft_split_empty_string(void)
{
	char	*s = "";
	char	c = ' ';
	char	**result = ft_split(s, c);

	assert(result[0] == NULL);
	free(result);
	printf("test_ft_split_empty_string passed.\n");
}

void	test_ft_split_null_input(void)
{
	char	**result = ft_split(NULL, ' ');

	assert(result == NULL);
	printf("test_ft_split_null_input passed.\n");
}

int	main(void)
{
	test_ft_split_basic();
	test_ft_split_no_delimiter();
	test_ft_split_consecutive_delimiters();
	test_ft_split_empty_string();
	test_ft_split_null_input();

	printf("All tests passed.\n");
	return (0);
}

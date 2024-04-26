/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:14:42 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 18:05:45 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_strdup_basic(void)
{
	const char	*original = "Hello, world!";
	const char	*duplicate = ft_strdup(original);

	assert(duplicate != NULL);
	assert(strcmp(original, duplicate) == 0);
	assert(original != duplicate);

	printf("test_strdup_basic passed.\n");
}

void	test_strdup_empty(void)
{
	const char	*original = "";
	const char	*duplicate = ft_strdup(original);

	assert(duplicate != NULL);
	assert(strcmp(original, duplicate) == 0);
	assert(original != duplicate);

	printf("test_strdup_empty passed.\n");
}

void	test_strdup_null(void)
{
	const char	*duplicate = ft_strdup(NULL);

	assert(duplicate == NULL);

	printf("test_strdup_null passed.\n");
}

void	test_strdup_long(void)
{
	const char	*original = "This is a long string that will be duplicated.";
	const char	*duplicate = ft_strdup(original);

	assert(duplicate != NULL);
	assert(strcmp(original, duplicate) == 0);
	assert(original != duplicate);

	printf("test_strdup_long passed.\n");
}

void	test_strdup_zero_length(void)
{
	const char	*original = "This should not matter.";
	const char	*duplicate = ft_strdup(original);

	assert(duplicate != NULL);
	assert(strcmp(original, duplicate) == 0);
	assert(original != duplicate);

	printf("test_strdup_zero_length passed.\n");
}

int	main(void)
{
	test_strdup_basic();
	test_strdup_empty();
	test_strdup_null();
	test_strdup_long();
	test_strdup_zero_length();

	printf("All tests passed.\n");
	return (0);
}

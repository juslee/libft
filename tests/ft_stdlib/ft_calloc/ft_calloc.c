/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:59:24 by welee             #+#    #+#             */
/*   Updated: 2024/05/16 17:20:50 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_calloc_basic(void)
{
	const size_t	count = 5;
	const size_t	size = 10;
	const size_t	total_size = count * size;
	const void		*ptr = ft_calloc(count, size);
	size_t			i;

	assert(ptr != NULL);
	i = 0;
	while (i < total_size)
	{
		assert(((char *)ptr)[i] == 0);
		++i;
	}
	free((void *)ptr);
	printf("test_calloc_basic passed.\n");
}

void	test_calloc_zero_count(void)
{
	const size_t	count = 0;
	const size_t	size = 10;
	const void	*ptr = ft_calloc(count, size);

	assert(ptr != NULL);
	free((void *)ptr);
	printf("test_calloc_zero_count passed.\n");
}

void	test_calloc_zero_size(void)
{
	const size_t	count = 5;
	const size_t	size = 0;
	const void	*ptr = ft_calloc(count, size);

	assert(ptr != NULL);
	free((void *)ptr);
	printf("test_calloc_zero_size passed.\n");
}

void	test_calloc_zero_count_and_size(void)
{
	const size_t	count = 0;
	const size_t	size = 0;
	const void		*ptr = ft_calloc(count, size);
	const void		*ptr2 = calloc(count, size);

	assert(ptr != NULL);
	assert(ptr2 != NULL);
	free((void *)ptr);
	printf("test_calloc_zero_count_and_size passed.\n");
}

void	test_calloc_large_allocation(void)
{
	const size_t	num = 1024 * 1024 * 1024;
	char			*arr = calloc(num, sizeof(char));

	if (arr != NULL)
	{
		assert(arr[0] == 0);
		assert(arr[num - 1] == 0);
	}

	free(arr);
	printf("test_calloc_large_allocation passed.\n");
}

int	main(void)
{
	test_calloc_basic();
	test_calloc_zero_count();
	test_calloc_zero_size();
	test_calloc_zero_count_and_size();
	test_calloc_large_allocation();

	printf("All tests passed.\n");
	return (0);
}

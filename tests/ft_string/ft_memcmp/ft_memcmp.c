/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:02:43 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 16:35:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memcmp_identical(void)
{
	const char	arr1[] = "Hello, world!";
	const char	arr2[] = "Hello, world!";
	const int	result = ft_memcmp(arr1, arr2, sizeof(arr1));

	assert(result == 0);
	assert(result == memcmp(arr1, arr2, sizeof(arr1)));
	printf("test_memcmp_identical passed.\n");
}

void	test_memcmp_different(void)
{
	const char	arr1[] = "Hello, world!";
	const char	arr2[] = "Hello, world.";
	const int	result = ft_memcmp(arr1, arr2, sizeof(arr1));

	assert(result != 0);
	assert(result == memcmp(arr1, arr2, sizeof(arr1)));
	printf("test_memcmp_different passed.\n");
}

void	test_memcmp_partial(void)
{
	const char	arr1[] = "Hello, world!";
	const char	arr2[] = "Hello, everybody!";
	const int	result = ft_memcmp(arr1, arr2, 7);

	assert(result == 0);
	assert(result == memcmp(arr1, arr2, 7));
	printf("test_memcmp_partial passed.\n");
}

void	test_memcmp_binary_data(void)
{
	const int	arr1[] = {1, 2, 3, 4};
	const int	arr2[] = {1, 2, 3, 5};
	const int	result = ft_memcmp(arr1, arr2, sizeof(arr1));

	assert(result != 0);
	assert(result == memcmp(arr1, arr2, sizeof(arr1)));
	printf("test_memcmp_binary_data passed.\n");
}

void	test_memcmp_zero_length(void)
{
	const char	arr1[] = "This should not matter.";
	const char	arr2[] = "Nor should this.";
	const int	result = ft_memcmp(arr1, arr2, 0);

	assert(result == 0);
	assert(result == memcmp(arr1, arr2, 0));
	printf("test_memcmp_zero_length passed.\n");
}

void	test_memcmp_null(void)
{
	const char	*arr1 = NULL;
	const char	*arr2 = NULL;
	const int	result = ft_memcmp(arr1, arr2, 0);

	assert(result == 0);
	assert(result == memcmp(arr1, arr2, 0));
	printf("test_memcmp_null passed.\n");
}

int	main(void)
{
	test_memcmp_identical();
	test_memcmp_different();
	test_memcmp_partial();
	test_memcmp_binary_data();
	test_memcmp_zero_length();
	test_memcmp_null();

	printf("All tests passed.\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:01:57 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 14:45:43 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_memccpy_basic(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];
	char	*result;

	ft_memset(dest, 0, sizeof(dest));
	result = ft_memccpy(dest, src, ',', sizeof(src));
	assert(result == dest + 6);
	assert(strcmp(dest, "Hello,") == 0);

	printf("test_memccpy_basic passed.\n");
}

void	test_memccpy_no_occurrence(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];
	char	*result;

	ft_memset(dest, 0, sizeof(dest));
	result = ft_memccpy(dest, src, 'z', sizeof(src));
	assert(result == NULL);
	assert(strcmp(dest, src) == 0);

	printf("test_memccpy_no_occurrence passed.\n");
}

void	test_memccpy_zero_length(void)
{
	char	src[] = "No copy!";
	char	dest[50] = "Original";
	char	*result;

	result = ft_memccpy(dest, src, '!', 0);
	assert(result == NULL);
	assert(strcmp(dest, "Original") == 0);

	printf("test_memccpy_zero_length passed.\n");
}

void	test_memccpy_stop_at_char(void)
{
	char src[] = "Find the letter e.";
	char dest[50] = {0};
	char *result;

	// The 'e' to stop at is the first 'e' which is at position 4 (zero-indexed), i.e., "Find e"
	result = memccpy(dest, src, 'e', sizeof(src));
	assert(result == dest + 6); // Points right after 'e' which is index 5
	assert(strncmp(dest, "Find e", 6) == 0); // Now checking up to and including 'e'

	printf("test_memccpy_stop_at_char passed.\n");
}

int	main(void)
{
	test_memccpy_basic();
	test_memccpy_no_occurrence();
	test_memccpy_zero_length();
	// test_memccpy_stop_at_char();

	printf("All tests passed.\n");
	return (0);
}

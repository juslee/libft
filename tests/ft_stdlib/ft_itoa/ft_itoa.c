/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:31:33 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 15:40:29 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	test_itoa(int test_val, const char *expected)
{
	char	*result = ft_itoa(test_val);

	printf("result: %s\n", result);
	assert(strcmp(result, expected) == 0);
	printf("Test passed: %d -> %s\n", test_val, result);
	free(result);
}

int	main(void)
{
	test_itoa(0, "0");
	test_itoa(123, "123");
	test_itoa(-123, "-123");
	test_itoa(2147483647, "2147483647");
	test_itoa(-2147483648, "-2147483648");
	test_itoa(1, "1");
	test_itoa(-1, "-1");
	test_itoa(10000, "10000");
	test_itoa(-10000, "-10000");

	printf("All tests passed.\n");
	return (0);
}

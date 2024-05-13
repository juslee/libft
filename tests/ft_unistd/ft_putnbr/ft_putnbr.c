/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:35:29 by welee             #+#    #+#             */
/*   Updated: 2024/05/13 16:43:54 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <limits.h>
#include "libft.h"

// Function to capture and verify output
void	verify_output(int input, char *expected)
{
	FILE	*fp;
	char output[1024];

	freopen("test_output.txt", "w+", stdout);
	ft_putnbr(input);
	fflush(stdout);

	fp = fopen("test_output.txt", "r");
	if (fgets(output, 1024, fp) == NULL)
	{
		output[0] = '\0';
	}
	fclose(fp);
	freopen("/dev/tty", "a", stdout);
	assert(strcmp(output, expected) == 0);
}

// Test cases
void	test_with_positive_number(void)
{
	verify_output(123, "123");
}

void	test_with_negative_number(void)
{
	verify_output(-123, "-123");
}

void	test_with_zero(void)
{
	verify_output(0, "0");
}

void	test_with_int_max(void)
{
	verify_output(INT_MAX, "2147483647");
}

void	test_with_int_min(void)
{
	verify_output(INT_MIN, "-2147483648");
}

// Main function that runs all tests
int	main(void)
{
	test_with_positive_number();
	test_with_negative_number();
	test_with_zero();
	test_with_int_max();
	test_with_int_min();

	printf("All tests passed successfully!\n");
	return (0);
}

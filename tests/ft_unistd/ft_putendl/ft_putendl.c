/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:11:57 by welee             #+#    #+#             */
/*   Updated: 2024/05/13 16:34:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

// Function to capture and verify output
void	verify_output(char *input, char *expected)
{
	FILE	*fp;
	char	output[1024];

	freopen("test_output.txt", "w+", stdout);
	ft_putendl(input);
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

// Specific test cases
void	test_with_normal_string(void)
{
	verify_output("Hello, world!", "Hello, world!\n");
}

void	test_with_empty_string(void)
{
	verify_output("", "\n");
}

void	test_with_numeric_string(void)
{
	verify_output("42", "42\n");
}

void	test_with_special_characters(void)
{
	verify_output("!@#$%^&*()", "!@#$%^&*()\n");
}

// Main function that runs all tests
int	main(void)
{
	test_with_normal_string();
	test_with_empty_string();
	test_with_numeric_string();
	test_with_special_characters();

	printf("All tests passed successfully!\n");
	return (0);
}

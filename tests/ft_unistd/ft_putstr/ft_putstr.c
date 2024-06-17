/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:13:37 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:22:15 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include "libft.h"  // Adjust the path as necessary to include your libft header

#define OUTPUT_FILE "output.txt"
#define BUFFER_SIZE 256

void	redirect_stdout_to_file(void)
{
	if (!freopen(OUTPUT_FILE, "w", stdout))
	{
		perror("freopen");
		exit(EXIT_FAILURE);
	}
}

void	reset_stdout(void)
{
	if (!freopen("/dev/tty", "w", stdout))
	{
		perror("freopen");
		exit(EXIT_FAILURE);
	}
}

void	read_output_file(char *buffer, size_t size)
{
	FILE	*output;
	size_t	len;

	output = fopen(OUTPUT_FILE, "r");
	if (!output)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	len = fread(buffer, 1, size - 1, output);
	buffer[len] = '\0';  // Null-terminate the string
	fclose(output);
}

void	test_ft_putstr_null(void)
{
	char	buffer[BUFFER_SIZE];

	redirect_stdout_to_file();
	ft_putstr(NULL);
	reset_stdout();
	read_output_file(buffer, BUFFER_SIZE);
	assert(strcmp(buffer, "") == 0);
	printf("test_ft_putstr_null passed\n");
}

void	test_ft_putstr_empty(void)
{
	char	buffer[BUFFER_SIZE];

	redirect_stdout_to_file();
	ft_putstr("");
	reset_stdout();
	read_output_file(buffer, BUFFER_SIZE);
	assert(strcmp(buffer, "") == 0);
	printf("test_ft_putstr_empty passed\n");
}

void	test_ft_putstr_normal(void)
{
	char	buffer[BUFFER_SIZE];

	redirect_stdout_to_file();
	ft_putstr("Hello, World!");
	reset_stdout();
	read_output_file(buffer, BUFFER_SIZE);
	assert(strcmp(buffer, "Hello, World!") == 0);
	printf("test_ft_putstr_normal passed\n");
}

void	test_ft_putstr_newline(void)
{
	char	buffer[BUFFER_SIZE];

	redirect_stdout_to_file();
	ft_putstr("Hello\nWorld");
	reset_stdout();
	read_output_file(buffer, BUFFER_SIZE);
	assert(strcmp(buffer, "Hello\nWorld") == 0);
	printf("test_ft_putstr_newline passed\n");
}

void	test_ft_putstr_long(void)
{
	char	buffer[BUFFER_SIZE];
	char	*long_str;

	long_str = "This is a very long string used for testing the ft_putstr "
				"function to ensure it can handle long strings properly.";
	redirect_stdout_to_file();
	ft_putstr(long_str);
	reset_stdout();
	read_output_file(buffer, BUFFER_SIZE);
	assert(strcmp(buffer, long_str) == 0);
	printf("test_ft_putstr_long passed\n");
}

int	main(void)
{
	test_ft_putstr_null();
	test_ft_putstr_empty();
	test_ft_putstr_normal();
	test_ft_putstr_newline();
	test_ft_putstr_long();

	printf("All tests passed\n");
	return (0);
}

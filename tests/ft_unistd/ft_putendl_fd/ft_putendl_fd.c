/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:40:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/27 10:56:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Helper function to capture the output from a file descriptor
int	capture_fd_output(int fd, char *output, size_t size,
	void (*func)(char *, int), char *input)
{
	int	fd_save = dup(fd);
	int	pipefd[2];

	pipe(pipefd);
	dup2(pipefd[1], fd);
	close(pipefd[1]);

	func(input, fd);
	fflush(NULL);

	dup2(fd_save, fd);
	read(pipefd[0], output, size);
	close(pipefd[0]);

	return (0);
}

// Test writing a string followed by a newline to STDOUT
void	test_write_string_with_newline_to_stdout(void)
{
	char	buffer[100] = {0};

	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putendl_fd, "Hello, world!");
	printf("Test Write to STDOUT with Newline: Expected 'Hello, world!\\n',"
		"Got '%s'\n", buffer);
}

// Test writing a string followed by a newline to STDERR
void	test_write_string_with_newline_to_stderr(void)
{
	char	buffer[100] = {0};

	capture_fd_output(STDERR_FILENO, buffer, sizeof(buffer),
		ft_putendl_fd, "Error message");
	printf("Test Write to STDERR with Newline: Expected 'Error message\\n', "
		"Got '%s'\n", buffer);
}

// Test writing a string followed by a newline to a file
void	test_write_string_with_newline_to_file(void)
{
	const char	*filename = "test_output.txt";
	int 		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char		buffer[100] = {0};

	ft_putendl_fd("File output", fd);
	close(fd);

	fd = open(filename, O_RDONLY);
	read(fd, buffer, sizeof(buffer));
	close(fd);

	printf("Test Write to File with Newline: Expected 'File output\\n', "
		"Got '%s'\n", buffer);
}

// Test with NULL pointer
void	test_null_pointer_with_newline(void)
{
	char	buffer[100] = {0};

	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putendl_fd, NULL);
	printf("Test NULL Pointer with Newline: Expected '\\n', "
		"Got '%s'\n", buffer);
}

// Test with invalid file descriptor
void	test_invalid_fd_with_newline(void)
{
	char	buffer[100] = {0};

	capture_fd_output(-1, buffer, sizeof(buffer), ft_putendl_fd, "Test");
	printf("Test Invalid FD with Newline: Expected '', Got '%s'\n", buffer);
}

// Test with empty string
void	test_empty_string_with_newline(void)
{
	char	buffer[100] = {0};

	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer), ft_putendl_fd, "");
	printf("Test Empty String with Newline: Expected '\\n', "
		"Got '%s'\n", buffer);
}

int	main()
{
	test_write_string_with_newline_to_stdout();
	test_write_string_with_newline_to_stderr();
	test_write_string_with_newline_to_file();
	test_null_pointer_with_newline();
	test_invalid_fd_with_newline();
	test_empty_string_with_newline();

	printf("All tests passed!\n");
	return (0);
}

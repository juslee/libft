/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:27:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/27 10:49:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Helper function to redirect STDOUT to a buffer and read from it
int	capture_stdout(char *output, size_t size, void (*func)(char, int), char c)
{
	const int	stdout_save = dup(STDOUT_FILENO);
	int			pipefd[2];

	pipe(pipefd);
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[1]);

	func(c, STDOUT_FILENO);
	fflush(stdout);

	dup2(stdout_save, STDOUT_FILENO);
	read(pipefd[0], output, size);
	close(pipefd[0]);

	return (0);
}

// Test writing to STDOUT
void	test_write_to_stdout(void)
{
	char	buffer[10] = {0};

	capture_stdout(buffer, sizeof(buffer), ft_putchar_fd, 'x');
	printf("Test Write to STDOUT: Expected 'x', Got '%s'\n", buffer);
}

// Test writing to STDERR
void	test_write_to_stderr(void)
{
	const int	stderr_save = dup(STDERR_FILENO);
	int			pipefd[2];
	char		buffer[10] = {0};

	pipe(pipefd);
	dup2(pipefd[1], STDERR_FILENO);
	close(pipefd[1]);

	ft_putchar_fd('y', STDERR_FILENO);


	fflush(stderr);
	dup2(stderr_save, STDERR_FILENO);
	read(pipefd[0], buffer, sizeof(buffer));
	close(pipefd[0]);

	printf("Test Write to STDERR: Expected 'y', Got '%s'\n", buffer);
}

// Test writing to a file
void	test_write_to_file(void)
{
	const char	*filename = "test_output.txt";
	int			fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char		buffer[10] = {0};

	ft_putchar_fd('z', fd);
	close(fd);

	fd = open(filename, O_RDONLY);
	read(fd, buffer, 1);
	close(fd);

	printf("Test Write to File: Expected 'z', Got '%s'\n", buffer);
}

// Test with invalid file descriptor
void	test_invalid_fd(void)
{
	char	buffer[10] = {0};

	capture_stdout(buffer, sizeof(buffer), ft_putchar_fd, 'a');
	printf("Test Invalid FD: Expected '', Got '%s'\n", buffer);
}

// Test writing null character
void	test_write_null_char(void)
{
	char	buffer[10] = {0};

	capture_stdout(buffer, sizeof(buffer), ft_putchar_fd, '\0');
	printf("Test Write Null Char: Got '\\0' (as expected if seen nothing)\n");
}

int	main()
{
	test_write_to_stdout();
	test_write_to_stderr();
	test_write_to_file();
	test_invalid_fd();
	test_write_null_char();

	printf("All tests passed!\n");
	return (0);
}

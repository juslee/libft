/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:45:20 by welee             #+#    #+#             */
/*   Updated: 2024/04/27 11:26:11 by welee            ###   ########.fr       */
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
	void (*func)(int, int), int input)
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

// Test writing various numbers to STDOUT
void	test_numbers_stdout(void)
{
	char	buffer[100] = {0};

	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putnbr_fd, 12345);
	printf("Test positive number: Expected '12345', Got '%s'\n", buffer);

	memset(buffer, 0, sizeof(buffer));
	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putnbr_fd, 0);
	printf("Test zero: Expected '0', Got '%s'\n", buffer);

	memset(buffer, 0, sizeof(buffer));
	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putnbr_fd, -12345);
	printf("Test negative number: Expected '-12345', Got '%s'\n", buffer);

	memset(buffer, 0, sizeof(buffer));
	capture_fd_output(STDOUT_FILENO, buffer, sizeof(buffer),
		ft_putnbr_fd, -2147483648);
	printf("Test INT_MIN: Expected '-2147483648', Got '%s'\n", buffer);
}

// Test writing a number to a file
void	test_number_to_file(void)
{
	const char	*filename = "test_output.txt";
	char		buffer[100] = {0};
	int			fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	ft_putnbr_fd(67890, fd);
	close(fd);

	fd = open(filename, O_RDONLY);
	read(fd, buffer, sizeof(buffer));
	close(fd);
	remove(filename);

	printf("Test Write to File: Expected '67890', Got '%s'\n", buffer);
}

// Test with invalid file descriptor
void	test_invalid_fd(void)
{
	char	buffer[100] = {0};

	capture_fd_output(-1, buffer, sizeof(buffer), ft_putnbr_fd, 123);
	printf("Test Invalid FD: Expected '', Got '%s'\n", buffer);
}

int	main(void)
{
	test_numbers_stdout();
	test_number_to_file();
	test_invalid_fd();

	printf("All tests passed.\n");
	return (0);
}

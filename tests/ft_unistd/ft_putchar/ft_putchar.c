/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:07:02 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 11:15:29 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

// Helper function to redirect stdout and capture it
int	capture_output(char *buf, size_t size, void (*func)(char), char arg)
{
	int		saved_stdout;
	FILE	*temp;
	int		temp_fd;
	int		len;

	fflush(stdout);
	saved_stdout = dup(1);
	temp = tmpfile();
	temp_fd = fileno(temp);
	dup2(temp_fd, 1);
	func(arg);
	fflush(stdout);
	fseek(temp, 0, SEEK_SET);
	len = read(temp_fd, buf, size - 1);
	buf[len] = '\0';
	dup2(saved_stdout, 1);
	close(saved_stdout);
	fclose(temp);
	return (len);
}

// Test function for ft_putchar
void	test_ft_putchar(char c, char expected)
{
	char	buffer[128] = {0};

	capture_output(buffer, sizeof(buffer), ft_putchar, c);

	printf("Testing ft_putchar('%c')...", c);
	if (buffer[0] == expected && buffer[1] == '\0')
	{
		printf(" OK\n");
	}
	else
	{
		printf(" FAIL (Expected '%c', got '%s')\n", expected, buffer);
	}
}

int	main(void)
{
	test_ft_putchar('a', 'a');
	test_ft_putchar('\n', '\n');
	test_ft_putchar('0', '0');
	test_ft_putchar('\xff', '\xff');

	printf("All tests passed!\n");
	return (0);
}

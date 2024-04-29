/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:24:14 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:40:09 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putchar_fd.c
 * @brief Outputs the character 'c' to the given file descriptor
 */

#include <unistd.h>

/**
 * @brief Outputs the character 'c' to the given file descriptor
 * @param c a character to output
 * @param fd the file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

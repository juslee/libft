/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:55:04 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 11:00:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putchar.c
 * @brief print a character
 */

#include <unistd.h>

/**
 * @brief print a character
 * @param c character to be printed
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

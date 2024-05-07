/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:18:33 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 13:11:09 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr.c
 * @brief print a string
 */

#include <unistd.h>

/**
 * @brief print a string
 * @param str string to be printed
 */
void	ft_putstr(char *s)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(1, s++, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:15:28 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 10:17:14 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isnumber.c
 * @brief Check if a string is an integer
 */

#include "libft.h"

/**
 * @brief Check if a string is an integer
 *
 * @param str string to check
 * @return int return 1 if the string is an integer, 0 otherwise
 */
int	ft_isnumber(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

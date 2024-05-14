/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:25:09 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 17:44:07 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @brief Convert a string to an integer.
 */

// #include "libft.h"

/**
 * @brief Check if the character is a space.
 * @param c The character to check.
 * @return Nonzero if the character c is a space and zero if not.
 */
static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

/**
 * @brief Check if the character is a digit.
 * @param c The character to check.
 * @return Nonzero if the character c is a digit and zero if not.
 */
static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * @brief Convert a string to an integer.
 * @param nptr The string to convert.
 * @return The integer value.
 */
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	if (!nptr)
		return (0);
	sign = 1;
	result = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		++nptr;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + *nptr - '0';
		++nptr;
	}
	return (result * sign);
}

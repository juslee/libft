/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:25:09 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 21:53:09 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Convert a string to an integer
/// @param nptr The string to convert
/// @return The integer value
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

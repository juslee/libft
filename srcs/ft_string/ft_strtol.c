/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:46:00 by welee             #+#    #+#             */
/*   Updated: 2024/08/18 20:57:23 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_string.h"

static int	is_valid_char(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c < '0' + base);
	return ((c >= '0' && c <= '9') || (c >= 'a' && c < 'a' + base - 10)
		|| (c >= 'A' && c < 'A' + base - 10));
}

static int	get_digit_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10);
	return (-1);
}

static int	handle_sign(const char **str)
{
	int	sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

static int	handle_base(const char **str, int base)
{
	if ((base == 0 || base == 16) && **str == '0'
		&& (*((*str) + 1) == 'x' || *((*str) + 1) == 'X'))
	{
		*str += 2;
		return (16);
	}
	if (base == 0 && **str == '0')
		return (8);
	if (base == 0)
		return (10);
	return (base);
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	long	result;
	int		sign;

	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = handle_sign(&str);
	base = handle_base(&str, base);
	while (is_valid_char(*str, base))
	{
		result = result * base + get_digit_value(*str);
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result * sign);
}

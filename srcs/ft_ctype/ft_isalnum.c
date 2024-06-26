/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:14:11 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:09:01 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isalnum.c
 * @brief Check if the character is an alphabet or a digit.
 */

#include "libft.h"

/**
 * @brief Check if the character is an alphabet or a digit.
 * @param c The character to check.
 * @return Nonzero if the character c falls into the and zero if not.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}

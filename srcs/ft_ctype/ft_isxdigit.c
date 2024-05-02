/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:12:37 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:15:45 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isxdigit.c
 * @brief Check if the character is a hexadecimal digit.
 */

/**
 * @brief Check if the character is a hexadecimal digit.
 * @param c
 * @return Nonzero if the character c is a hexadecimal digit and zero if not.
 */
int	ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'F')
		|| (c >= 'a' && c <= 'f'));
}

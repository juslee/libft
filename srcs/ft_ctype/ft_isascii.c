/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:52:32 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 16:35:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isascii.c
 * @brief Check if the character is an ascii character.
 */

/**
 * @brief Check if the character is an ascii character.
 * @param c The character to check.
 * @return Nonzero if the character c falls into the and zero if not.
 * return ((c & ~0x7F) == 0);
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

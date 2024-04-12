/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:52:32 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 12:13:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if the character is an ascii character
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_isascii(int c)
{
	return ((c & ~0x7F) == 0);
}

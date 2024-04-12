/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:23:45 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 12:31:52 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if the character is a printable character
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

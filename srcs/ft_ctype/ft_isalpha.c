/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:25:35 by welee             #+#    #+#             */
/*   Updated: 2024/04/11 16:34:54 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if the character is an alphabet
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

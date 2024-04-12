/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:35:12 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 12:35:23 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if the character is a lowercase letter
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (c);
	return (0);
}

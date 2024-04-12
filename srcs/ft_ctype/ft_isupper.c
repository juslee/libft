/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:34:39 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 12:34:53 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if the character is an uppercase letter
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:03:14 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:08:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_iscntrl.c
 * @brief Check if the character is a control character.
 */

/**
 * @brief Check if the character is a control character.
 * @param c The character to check.
 * @return Nonzero if the character c is a control character and zero if not.
 */
int	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127);
}

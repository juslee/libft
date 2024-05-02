/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:01:13 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:02:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isblank.c
 * @brief Check if the character is a blank character.
 */

/**
 * @brief Check if the character is a blank character.
 * @param c The character to check.
 * @return Nonzero if the character c is a blank character and zero if not.
 */
int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

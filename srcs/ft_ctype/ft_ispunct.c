/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:10:48 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:28:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_ispunct.c
 * @brief Check if the character is a punctuation character.
 */

/**
 * @brief Check if the character is a punctuation character.
 * @param c The character to check.
 * @return Nonzero if the character c is a punctuation character and zero if
 * not.
 */
int	ft_ispunct(int c)
{
	return ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126));
}

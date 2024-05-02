/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:09:19 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:10:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isgraph.c
 * @brief Check if the character is a printable character except space.
 */

/**
 * @brief Check if the character is a printable character except space.
 * @param c The character to check.
 * @return Nonzero if the character c is a printable character except space
 * and zero if not.
 */
int	ft_isgraph(int c)
{
	return (c >= 33 && c <= 126);
}

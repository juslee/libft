/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:25:35 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 20:08:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Check if the character is an alphabet
/// @param c The character to check
/// @return nonzero if the character c falls into the and zero if not
int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (c);
	return (0);
}

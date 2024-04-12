/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:13:44 by welee             #+#    #+#             */
/*   Updated: 2024/04/12 17:16:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief Calculate the length of a string
/// @param s The string to calculate the length
/// @return The length of the string
size_t	strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

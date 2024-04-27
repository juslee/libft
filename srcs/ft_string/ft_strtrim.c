/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:27:07 by welee             #+#    #+#             */
/*   Updated: 2024/04/27 13:54:15 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Trim the string with the given set of characters
/// @param s1 The string to be trimmed
/// @param s2 The set of characters to be trimmed
/// @return The trimmed string
char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(s2, s1[start]))
		++start;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(s2, s1[end - 1]))
		--end;
	len = end - start;
	return (ft_substr(s1, start, len));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:06:07 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:25:15 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnstr.c
 * @brief Locate a substring in a string
 */

#include <stddef.h>
#include "libft.h"

/**
 * @brief Locate a substring in a string
 * @param big The string to search in
 * @param little The string to search for
 * @param len The maximum number of characters to search
 * @return A pointer to the first occurrence of little in big,
 * or NULL if not found
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;
	size_t	i;

	if (!big || !little)
		return (NULL);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (little_len == 0)
		return ((char *)big);
	if (big_len < little_len || len < little_len)
		return (NULL);
	i = 0;
	while (i <= len - little_len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		++i;
	}
	return (NULL);
}

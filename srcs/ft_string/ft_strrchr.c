/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:32:01 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:38:29 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strrchr.c
 * @brief Locate the last occurrence of a character in a string
 */

#include <stddef.h>

/**
 * @brief Locate the last occurrence of a character in a string
 * @param s The string to search in
 * @param c The character to search for
 * @return The pointer to the located character, or NULL if the character
 * does not appear in the string
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *) &s[i];
	return (res);
}

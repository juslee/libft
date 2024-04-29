/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:20:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 15:01:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strchr.c
 * @brief Locates the first occurrence of c
 * (converted to a char) in the string pointed to by s.
 */
#include <stddef.h>

/**
 * @brief Locates the first occurrence of c (converted to a char) in the
 * string pointed to by s.
 * The terminating null character is considered to be part of the string;
 * therefore if c is `\0`, the functions locate the terminating `\0`.
 * @param s string to search in
 * @param c character to search for
 * @return the pointer to the located character, or NULL if the character
 * does not appear in the string
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

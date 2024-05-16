/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:32:01 by welee             #+#    #+#             */
/*   Updated: 2024/05/16 15:55:28 by welee            ###   ########.fr       */
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
	const char	*last_occurrence = NULL;
	char		ch;

	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			last_occurrence = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:32:01 by welee             #+#    #+#             */
/*   Updated: 2024/04/16 16:53:28 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief The ft_strrchr() function locates the last occurrence of c
/// (converted to a char) in the string pointed to by s.
/// The terminating null character is considered to be part of the string;
/// therefore if c is `\0`, the functions locate the terminating `\0`.
/// @param s string to search in
/// @param c character to search for
/// @return the pointer to the located character, or NULL if the character
/// does not appear in the string
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

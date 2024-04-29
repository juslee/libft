/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:08:00 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 22:11:43 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strmapi.c
 * @brief Applies the function 'f' to each character of the string 's' to create
 * a new string resulting from successive applications of 'f'.
 */

#include <stdlib.h>

/**
 * @brief Applies the function 'f' to each character of the string 's' to create
 * a new string resulting from successive applications of 'f'.
 * @param s The string to map.
 * @param f The function to apply to each character.
 * @return The new string created from the successive applications of 'f'.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		++i;
	res = (char *)malloc(i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = '\0';
	return (res);
}

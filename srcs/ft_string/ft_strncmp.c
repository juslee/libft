/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:17:14 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:23:48 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncmp.c
 * @brief Compare two strings
 */

#include <stddef.h>

/**
 * @brief Compare two strings
 * @param s1 The first string
 * @param s2 The second string
 * @param n The maximum number of characters to compare
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		if (*s1 != *s2 || !*s1 || !*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		++s1;
		++s2;
	}
	return (0);
}

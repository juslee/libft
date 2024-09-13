/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:36:34 by welee             #+#    #+#             */
/*   Updated: 2024/09/13 15:49:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strreplace.c
 * @brief Replaces all occurrences of a substring in a string with another
 * substring.
 */

#include "libft.h"

/**
 * @brief Counts the number of occurrences of a substring in a string
 * @param str The string to search in
 * @param old The substring to search for
 * @return The number of occurrences of the substring in the string
 */
static int	count_occurrences(const char *str, const char *old)
{
	int		count;
	size_t	len_old;
	char	*tmp;

	count = 0;
	len_old = ft_strlen(old);
	tmp = (char *)str;
	while (tmp != NULL)
	{
		tmp = ft_strstr(tmp, old);
		if (tmp != NULL)
		{
			count++;
			tmp += len_old;
		}
	}
	return (count);
}

/**
 * @brief Calculates the length of the string after replacing all occurrences
 * of a substring with another substring
 * @param str The string to search in
 * @param old The substring to search for
 * @param new The substring to replace with
 * @return The length of the string after replacement
 */
static size_t	calculate_new_length(const char *str, const char *old,
					const char *new)
{
	size_t	len_str;
	size_t	len_old;
	size_t	len_new;
	int		count;

	len_str = ft_strlen(str);
	len_old = ft_strlen(old);
	len_new = ft_strlen(new);
	count = count_occurrences(str, old);
	return (len_str + (len_new - len_old) * count);
}

/**
 * @brief Performs the replacement of all occurrences of a substring in a string
 * with another substring
 * @param str The string to search in
 * @param old The substring to search for
 * @param new The substring to replace with
 * @param result The buffer to store the result
 */
static void	perform_replacement(const char *str, const char *old,
				const char *new, char *result)
{
	size_t	len_old;
	size_t	len_new;
	char	*pos;

	len_old = ft_strlen(old);
	len_new = ft_strlen(new);
	while (*str)
	{
		pos = ft_strstr(str, old);
		if (pos == str)
		{
			ft_memcpy(result, new, len_new);
			str += len_old;
			result += len_new;
		}
		else
			*result++ = *str++;
	}
	*result = '\0';
}

/**
 * @brief Replaces all occurrences of a substring in a string with another
 * substring
 * @param str The string to search in
 * @param old The substring to search for
 * @param new The substring to replace with
 * @return The new string with all occurrences of the substring replaced
 */
char	*ft_strreplace(const char *str, const char *old, const char *new)
{
	char	*result;
	size_t	new_len;

	if (!str || !old || !new || ft_strlen(old) == 0)
		return (NULL);
	new_len = calculate_new_length(str, old, new);
	result = malloc(new_len + 1);
	if (!result)
		return (NULL);
	perform_replacement(str, old, new, result);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:46:32 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 17:23:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @brief Splits a string into words by a charset.
 */

#include <stdlib.h>
#include "libft.h"

#include <stdlib.h>

/**
 * @brief Counts the number of words in a string.
 *
 * @param s The string to count words in.
 * @param c The character to split the string by.
 * @return int The number of words in the string.
 */
static int	ft_count_words(const char *s, char c)
{
	int		count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/**
 * @brief Duplicates a string up to a certain length.
 *
 * @param s The string to duplicate.
 * @param n The length to duplicate up to.
 * @return char* The duplicated string.
 */
static char	*ft_strndup_a(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/**
 * @brief Splits a string into words by a charset.
 *
 * @param s The string to split.
 * @param c The character to split the string by.
 * @return char** The array of words.
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word_len;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		if (word_len)
		{
			split[i++] = ft_strndup_a(s, word_len);
			s += word_len;
		}
	}
	split[i] = NULL;
	return (split);
}

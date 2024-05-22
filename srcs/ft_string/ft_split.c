/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:46:32 by welee             #+#    #+#             */
/*   Updated: 2024/05/22 14:13:03 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @brief Splits a string into words by a charset.
 */

#include <stdio.h>
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
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
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
static char	*ft_strndup_(const char *s, size_t n)
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
 * @brief Frees all the memory allocated for the split string.
 *
 * @param result The array of words.
 * @param index The index to free up to.
 */
static void	ft_free_all(char **result, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(result[i++]);
	free(result);
}

static char	**ft_split_helper(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word_len;

	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		if (word_len)
		{
			split[i] = ft_strndup_(s, word_len);
			if (!split[i++])
				return (ft_free_all(split, i - 1), NULL);
			s += word_len;
		}
	}
	split[i] = NULL;
	return (split);
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
	if (!s)
		return (NULL);
	return (ft_split_helper(s, c));
}

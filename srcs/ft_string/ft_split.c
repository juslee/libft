/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:46:32 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 14:32:12 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @brief Splits a string into words by a charset.
 */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Checks if character is a charset.
 * @param c Character to check.
 * @param charset Charset to compare with.
 * @return 1 if c is charset, 0 otherwise.
 */
static int	is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

/**
 * @brief Counts words in a string.
 * @param str String to count words in.
 * @param charset Word delimiter.
 * @return Number of words.
 */
static int	count_words(char const *str, char charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
			count++;
		while (*str && !is_charset(*str, charset))
			str++;
	}
	return (count);
}

/**
 * @brief Allocates memory for a word.
 * @param str String to allocate word from.
 * @param charset Word delimiter.
 * @return Pointer to allocated word.
 */
static char	*malloc_word(char const *str, char charset)
{
	char	*word;
	int		len;

	len = 0;
	while (str[len] && !is_charset(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (str[len] && !is_charset(str[len], charset))
	{
		word[len] = str[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings
 * obtained by splitting ’s’ using the character ’c’ as a delimiter.
 * The array must end with a NULL pointer.
 * @param str The string to split.
 * @param charset Delimiter for splitting.
 * @return The array of new strings resulting from the split. NULL if the
 * allocation fails.
 */
char	**ft_split(char const *str, char charset)
{
	char	**arr;
	int		i;

	if (!str)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			arr[i] = malloc_word(str, charset);
			i++;
		}
		while (*str && !is_charset(*str, charset))
			str++;
	}
	arr[i] = 0;
	return (arr);
}

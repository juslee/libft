/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:19:52 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 16:21:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strstr.c
 * @brief Locate the first occurrence of the null-terminated string to_find in
 * the null-terminated string str.
 */

/**
 * @brief Locate the first occurrence of the null-terminated string to_find in
 * the null-terminated string str.
 * @param str The string to search in.
 * @param to_find The string to search for.
 * @return A pointer to the located string in str, or a null pointer if the
 * string is not found.
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c])
		{
			if (to_find[c + 1] == '\0')
			{
				return (&str[i]);
			}
			c++;
		}
		i++;
	}
	return (0);
}

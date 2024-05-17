/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:49:49 by welee             #+#    #+#             */
/*   Updated: 2024/05/17 18:21:31 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Copies the string pointed to by src, including the terminating null
 * byte ('\0'), to the buffer pointed to by dest. The strings may not overlap,
 * and the destination string dest must be large enough to receive the copy.
 * Beware of buffer overruns!
 * @param dest The destination buffer
 * @param src The source string
 * @return A pointer to the destination string dest
 */
char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}

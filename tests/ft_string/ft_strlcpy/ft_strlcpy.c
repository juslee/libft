/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:48:25 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 11:52:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	printdiv(const char c)
{
	int	i;

	i = 0;
	while (i < 80)
	{
		printf("%c", c);
		i++;
	}
	printf("\n");
}

void	printchars(const char *str, int size)
{
	int	i;
	int	null_end;

	i = 0;
	null_end = size == 0;
	printf("{");
	while (null_end || size-- > 0)
	{
		if (i != 0)
		{
			printf(",");
		}
		if (str[i] == '\0')
		{
			printf(" '\\0'");
			if (null_end)
				break ;
		}
		else
		{
			printf(" '%c'", str[i]);
		}
		i++;
	}
	printf(" }\n");
}

void	test_strlcpy_case(
	size_t	func(char *restrict dest, const char *restrict src, size_t size),
	char *src, char *dest, size_t size, int dest_s)
{
	unsigned int	src_l;

	printdiv('-');
	printf("case: [%lu] \"%s\" -> \"%s\"\n", size, src, dest);

	printf("  src: %p ", src);
	printchars(src, 0);
	printf("  dst: %p ", dest);
	printchars(dest, dest_s);

	src_l = func(dest, src, size);

	printf("  dst: %p ", dest);
	printchars(dest, dest_s);

	printf("  len: %d\n", src_l);
	assert(src_l == strlen(src));

	printf("esac: [%lu] \"%s\" -> \"%s\"\n", size, src, dest);
}

void	test_strlcpy(char *name,
	size_t	func(char *restrict dest, const char *restrict src, size_t size))
{
	char	dest1[] = ".....";
	char	dest2[] = ".....";
	char	dest3[] = ".....";

	printdiv('=');
	printf("func: %s\n", name);
	test_strlcpy_case(func, "abc", dest1, sizeof(dest1), sizeof(dest1));
	test_strlcpy_case(func, "abcdefgh", dest2, sizeof(dest2), sizeof(dest2));
	test_strlcpy_case(func, "abcdefgh", dest3, 0, sizeof(dest3));
}

int	main(void)
{
	test_strlcpy("strlcpy", strlcpy);
	test_strlcpy("ft_strlcpy", ft_strlcpy);
}

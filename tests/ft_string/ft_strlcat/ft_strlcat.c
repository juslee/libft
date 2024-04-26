/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:34:19 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 11:43:39 by welee            ###   ########.fr       */
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

void	test_func_case(size_t	func(char *dest, const char *src, size_t n),
	char *dest, const char *src, size_t n, char *str, int len)
{
	int	l;

	printdiv('-');
	printf("case: \"%s\" (%lu) + \"%s\" = \"%s\" (%d)\n",
		dest, n, src, str, len);

	printf("  src: %p ", src);
	printchars((char *)src, 0);
	printf("  dst: %p ", dest);
	printchars(dest, 0);

	l = func(dest, src, n);

	printf("  dst: %p ", dest);
	printchars(dest, 0);

	printf("  len: %d\n", l);
	assert(l == len);

	assert(strcmp(dest, str) == 0);
}

void	test_func(char *name,
	size_t	func(char *dest, const char *src, size_t n))
{
	char	*src = "world";
	char	dest1[11] = "hello";
	char	dest2[11] = "hello";
	char	dest3[11] = "hello";
	char	dest4[11] = "hello";
	char	dest5[11] = "hello";
	char	dest6[11] = "hello";
	char	dest7[11] = "hello";

	printdiv('=');
	printf("func: %s\n", name);
	test_func_case(func, dest1, src, 11, "helloworld", 10);
	test_func_case(func, dest2, src, 10, "helloworl", 10);
	test_func_case(func, dest3, src, 12, "helloworld", 10);
	test_func_case(func, dest4, src, 0, "hello", 5);
	test_func_case(func, dest5, src, 4, "hello", 9);
	test_func_case(func, dest6, src, 5, "hello", 10);
	test_func_case(func, dest7, src, 6, "hello", 10);
}

int	main(void)
{
	test_func("strlcat", strlcat);
	test_func("ft_strlcat", ft_strlcat);
}

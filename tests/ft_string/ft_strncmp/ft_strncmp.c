/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:58:52 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 12:00:04 by welee            ###   ########.fr       */
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

void	test_strncmp_case(int func(const char *s1, const char *s2, size_t n),
	char *s1, char *s2, int n, int cmp)
{
	int	c;

	printdiv('-');
	printf("case: [%d] \"%s\" <-> \"%s\"\n", n, s1, s2);

	printf("  s1: %p ", s1);
	printchars(s1, 0);
	printf("  s2: %p ", s2);
	printchars(s2, 0);

	c = func(s1, s2, n);

	printf("  cmp: %d\n", c);
	assert(c == cmp);
}

void	test_strncmp(char *name,
	int func(const char *s1, const char *s2, size_t n))
{
	printdiv('=');
	printf("func: %s\n", name);
	test_strncmp_case(func, "ABC", "ABC", 3, 0);
	test_strncmp_case(func, "ABC", "AB", 3, 67);
	test_strncmp_case(func, "ABA", "ABZ", 3, -25);
	test_strncmp_case(func, "ABJ", "ABC", 3, 7);
	test_strncmp_case(func, "AB", "ABC", 3, -67);
	test_strncmp_case(func, "ABC", "ABC", 2, 0);
	test_strncmp_case(func, "ABC", "AB", 2, 0);
	test_strncmp_case(func, "ABA", "ABZ", 2, 0);
	test_strncmp_case(func, "ABJ", "ABC", 2, 0);
	test_strncmp_case(func, "AB", "ABC", 2, 0);
}

int	main(void)
{
	test_strncmp("strncmp", strncmp);
	test_strncmp("ft_strncmp", ft_strncmp);
}

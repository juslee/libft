/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:14:42 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 11:22:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
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
		if (i > 0)
			printf(", ");
		if (!str[i])
		{
			printf("'\\0'");
			if (null_end)
				break ;
		}
		else
			printf("'%c'", str[i]);
		i++;
	}
	printf("}\n");
}

void	test_ft_strdup(char	*func(const char *src), const char *src)
{
	char	*dest;

	printdiv('-');
	printf("case: \"%s\"\n", src);

	printf("  src: %p ", src);
	printchars(src, 0);

	dest = func(src);

	printf("  dst: %p ", dest);
	printchars(dest, 0);

	assert(src != dest);
	assert(strcmp(src, dest) == 0);

	free(dest);
}

void	test_func(char *name, char	*func(const char *src))
{
	printdiv('=');
	printf("func: %s\n", name);
	test_ft_strdup(func, "ABC");
	test_ft_strdup(func, "");
}

int	main(void)
{
	test_func("strdup", strdup);
	test_func("ft_strdup", ft_strdup);
}

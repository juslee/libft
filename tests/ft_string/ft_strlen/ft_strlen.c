/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:49:08 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:00:14 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>

size_t	ft_strlen(const char *s);

void	test_ft_strlen(const char *s)
{
	printf("case: \"%s\" -> %lu\n", s, strlen(s));
	printf("  ft_strlen: %lu\n", ft_strlen(s));
	assert(ft_strlen(s) == strlen(s));
}

int	main(void)
{
	test_ft_strlen("");
	test_ft_strlen("Hello, world!");
	test_ft_strlen("1234567890");
	test_ft_strlen("abcdefghijklmnopqrstuvwxyz");
	test_ft_strlen("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	test_ft_strlen(
		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	test_ft_strlen("lorem\tipsum\tdolor\nsit\namet\n");
	test_ft_strlen("\n\n\f\r\t");
	test_ft_strlen("   ");
}

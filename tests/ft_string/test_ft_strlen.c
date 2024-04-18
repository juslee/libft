/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:49:08 by welee             #+#    #+#             */
/*   Updated: 2024/04/18 14:53:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

size_t	ft_strlen(const char *s);

void	test_ft_strlen(const char *s)
{
	size_t	ft_len;

	printf("case: \"%s\" -> %lu\n", s, ft_strlen(s));
	ft_len = ft_strlen(s);
	printf("  ft_strlen: %lu\n", ft_len);
	assert(ft_len == ft_strlen(s));
}

int	main(void)
{
	test_ft_strlen(""); // empty string
	test_ft_strlen("Hello, world!"); // string with spaces and punctuation
	test_ft_strlen("1234567890"); // string with numbers
	test_ft_strlen("abcdefghijklmnopqrstuvwxyz"); // string with lowercase letters
	test_ft_strlen("ABCDEFGHIJKLMNOPQRSTUVWXYZ"); // string with uppercase letters
	test_ft_strlen("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"); // string with numbers and letters
}

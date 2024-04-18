/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:59:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/18 16:43:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int	ft_isalpha(int c);

void	test_ft_isalpha(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isalpha(c));
	printf("  ft_isalpha: %d\n", ft_isalpha(c));
	assert(ft_isalpha(c) == isalpha(c));
}

int	main(void)
{
	test_ft_isalpha(0);
	test_ft_isalpha(' ');
	test_ft_isalpha('a');
	test_ft_isalpha('Z');
	test_ft_isalpha('1');
	test_ft_isalpha('9');
	test_ft_isalpha(127);
}

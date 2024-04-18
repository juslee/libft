/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:59:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/18 14:41:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int	ft_isalpha(int c);

void	test_ft_isalpha(int c)
{
	int	ft_alpha;

	printf("case: \"%c\" -> %d\n", (char)c, isalpha(c));
	ft_alpha = ft_isalpha(c);
	printf("  ft_isalpha: %d\n", ft_alpha);
	assert(ft_alpha == isalpha(c));
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

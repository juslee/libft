/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:59:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:32:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isalpha(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isalpha(c));
	printf("  ft_isalpha: %d\n", ft_isalpha(c));
	assert(ft_isalpha(c) == isalpha(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isalpha(start);
		++start;
	}
}

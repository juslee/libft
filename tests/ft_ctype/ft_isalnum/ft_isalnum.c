/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:18:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:33:27 by welee            ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:33:43 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:39:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isascii(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isascii(c));
	printf("  ft_isascii: %d\n", ft_isascii(c));
	assert(ft_isascii(c) == isascii(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isascii(start);
		++start;
	}
}

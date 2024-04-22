/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:35:32 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:39:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isprint(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isprint(c));
	printf("  ft_isprint: %d\n", ft_isprint(c));
	assert(ft_isprint(c) == isprint(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isprint(start);
		++start;
	}
}

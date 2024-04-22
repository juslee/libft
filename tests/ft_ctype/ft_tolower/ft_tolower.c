/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:01 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:37:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_tolower(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, tolower(c));
	printf("  ft_tolower: %d\n", ft_tolower(c));
	assert(ft_tolower(c) == tolower(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_tolower(start);
		++start;
	}
}

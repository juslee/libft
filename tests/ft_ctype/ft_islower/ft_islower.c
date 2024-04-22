/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:34:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:35:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_islower(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, islower(c));
	printf("  ft_islower: %d\n", ft_islower(c));
	assert(ft_islower(c) == islower(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_islower(start);
		++start;
	}
}

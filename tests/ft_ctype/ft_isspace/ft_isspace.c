/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:36:06 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:36:27 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isspace(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isspace(c));
	printf("  ft_isspace: %d\n", ft_isspace(c));
	assert(ft_isspace(c) == isspace(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isspace(start);
		++start;
	}
}

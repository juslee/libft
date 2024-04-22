/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:34:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:34:44 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isdigit(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isdigit(c));
	printf("  ft_isdigit: %d\n", ft_isdigit(c));
	assert(ft_isdigit(c) == isdigit(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isdigit(start);
		++start;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:41 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:37:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_toupper(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, toupper(c));
	printf("  ft_toupper: %d\n", ft_toupper(c));
	assert(ft_toupper(c) == toupper(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_toupper(start);
		++start;
	}
}

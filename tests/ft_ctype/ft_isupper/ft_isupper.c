/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:36:33 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 12:36:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_isupper(int c)
{
	printf("case: \"%c\" -> %d\n", (char)c, isupper(c));
	printf("  ft_isupper: %d\n", ft_isupper(c));
	assert(ft_isupper(c) == isupper(c));
}

int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = 255;
	while (start <= end)
	{
		test_ft_isupper(start);
		++start;
	}
}

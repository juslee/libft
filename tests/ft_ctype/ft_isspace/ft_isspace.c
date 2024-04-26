/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:36:06 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 22:50:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isspace_standard(void)
{
	int	i;

	i = 9;
	while (i <= 13)
	{
		assert(ft_isspace(i));
		++i;
	}
	assert(ft_isspace(32));
	printf("test_isspace_standard passed.\n");
}

void	test_isspace_non_space(void)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		if (i >= 9 && i <= 13)
			;
		else if (i == 32)
			;
		else
			assert(!ft_isspace(i));
		++i;
	}
	printf("test_isspace_non_space passed.\n");
}

int	main(void)
{
	test_isspace_standard();
	test_isspace_non_space();

	printf("ft_isspace test passed.\n");
	return (0);
}

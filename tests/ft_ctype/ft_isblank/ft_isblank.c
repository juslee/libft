/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:19:30 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:23:58 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isblank_space(void)
{
	int	c;

	c = '\t';
	assert(ft_isblank(c) == isblank(c));
	c = ' ';
	assert(ft_isblank(c) == isblank(c));
	printf("test_isblank_space passed.\n");
}

void	test_isblank_non_blank(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if (c == '\t' || c == ' ')
			;
		else
			assert(ft_isblank(c) == isblank(c));
		++c;
	}
	printf("test_isblank_non_blank passed.\n");
}

void	test_isblank_negative(void)
{
	int	c;

	c = -128;
	while (c < 0)
	{
		assert(ft_isblank(c) == isblank(c));
		++c;
	}
	printf("test_isblank_negative passed.\n");
}

int	main(void)
{
	test_isblank_space();
	test_isblank_non_blank();
	test_isblank_negative();

	printf("All tests passed.\n");
	return (0);
}

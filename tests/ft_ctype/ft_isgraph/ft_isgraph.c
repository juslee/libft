/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:25:54 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 15:26:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isgraph_printable(void)
{
	int	c;

	c = 33;
	while (c < 127)
	{
		assert(ft_isgraph(c) == isgraph(c));
		++c;
	}
	printf("test_isgraph_printable passed.\n");
}

void	test_isgraph_non_printable(void)
{
	int	c;

	c = 0;
	while (c < 33)
	{
		assert(ft_isgraph(c) == isgraph(c));
		++c;
	}
	c = 127;
	while (c < 256)
	{
		assert(ft_isgraph(c) == isgraph(c));
		++c;
	}
	printf("test_isgraph_non_printable passed.\n");
}

void	test_isgraph_negative(void)
{
	int	c;

	c = -128;
	while (c < 0)
	{
		assert(ft_isgraph(c) == isgraph(c));
		++c;
	}
	printf("test_isgraph_negative passed.\n");
}

int	main(void)
{
	test_isgraph_printable();
	test_isgraph_non_printable();
	test_isgraph_negative();

	printf("All tests passed.\n");
	return (0);
}

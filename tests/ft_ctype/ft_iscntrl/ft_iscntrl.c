/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:24:52 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 13:54:02 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_iscntrl_control(void)
{
	int	c;

	c = 0;
	while (c < 32)
	{
		assert(ft_iscntrl(c) > 0 && iscntrl(c) > 0);
		++c;
	}
	assert(ft_iscntrl(c) == 0 && iscntrl(c) == 0);
	printf("test_iscntrl_control passed.\n");
}

void	test_iscntrl_non_control(void)
{
	int	c;

	c = 32;
	while (c < 128)
	{
		if (c < 32 || c == 127)
			;
		else
			assert(ft_iscntrl(c) == 0 && iscntrl(c) == 0);
		++c;
	}
	printf("test_iscntrl_non_control passed.\n");
}

void	test_iscntrl_negative(void)
{
	int	c;

	c = -128;
	while (c < 0)
	{
		assert(ft_iscntrl(c) == 0 && iscntrl(c) == 0);
		++c;
	}
	printf("test_iscntrl_negative passed.\n");
}

int	main(void)
{
	test_iscntrl_control();
	test_iscntrl_non_control();
	test_iscntrl_negative();

	printf("All tests passed.\n");
	return (0);
}

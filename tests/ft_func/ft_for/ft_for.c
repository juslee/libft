/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:37:12 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 16:44:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

static int count = 0;

void	test_function(int x)
{
	printf("Called with %d\n", x);
	count++;
}

void	test_ft_for_basic(void)
{
	int	start;
	int	end;

	start = 0;
	end = 5;
	count = 0;

	ft_for(start, end, test_function);

	assert(count == 5 && "Count should be 5 for a loop from 0 to 4");
	printf("test_ft_for_basic passed.\n");
}

void	test_ft_for_negative(void)
{
	int	start;
	int	end;

	start = -3;
	end = 2;

	count = 0;

	ft_for(start, end, test_function);

	assert(count == 5 && "Count should be 5 for a loop from -3 to 1");
	printf("test_ft_for_negative passed.\n");
}

void	test_ft_for_empty(void)
{
	int	start;
	int	end;

	start = 3;
	end = 3;

	count = 0;

	ft_for(start, end, test_function);

	assert(count == 0 && "Count should be 0 for a loop from 3 to 3 (empty)");
	printf("test_ft_for_empty passed.\n");
}

int	main(void)
{
	test_ft_for_basic();
	test_ft_for_negative();
	test_ft_for_empty();

	printf("All tests passed.\n");
	return (0);
}


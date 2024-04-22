/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 11:40:05 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int	ft_atoi(const char *nptr);

void	test_ft_atoi(const char *nptr)
{
	printf("case: \"%s\" -> %d\n", nptr, atoi(nptr));
	printf("  ft_atoi: %d\n", ft_atoi(nptr));
	assert(ft_atoi(nptr) == atoi(nptr));
}

int	main(void)
{
	test_ft_atoi("");
	test_ft_atoi("0");
	test_ft_atoi("546:5");
	test_ft_atoi("-4886");
	test_ft_atoi("+548");
	test_ft_atoi("054854");
	test_ft_atoi("000074");
	test_ft_atoi("+-54");
	test_ft_atoi("-+48");
	test_ft_atoi("--47");
	test_ft_atoi("++47");
	test_ft_atoi("+47+5");
	test_ft_atoi("-47-5");
	test_ft_atoi("\e475");
	test_ft_atoi("\t\n\r\v\f  469 \n");
	test_ft_atoi("-2147483648");
	test_ft_atoi("2147483647");
	test_ft_atoi("\t\n\r\v\fd469 \n");
	test_ft_atoi("\n\n\n  -46\b9 \n5d6");
}

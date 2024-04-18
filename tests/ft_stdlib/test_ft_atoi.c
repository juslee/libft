/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/18 14:51:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int	ft_atoi(const char *nptr);

void	test_ft_atoi(const char *nptr)
{
	int	ft_atoi_result;
	int	atoi_result;

	printf("case: \"%s\" -> %d\n", nptr, atoi(nptr));
	ft_atoi_result = ft_atoi(nptr);
	printf("  ft_atoi: %d\n", ft_atoi_result);
	assert(ft_atoi_result == atoi(nptr));
}

int	main(void)
{
	test_ft_atoi("");
	test_ft_atoi("0");
	test_ft_atoi("1");
	test_ft_atoi("42");
	test_ft_atoi(" 42");
	test_ft_atoi("42 ");
	test_ft_atoi(" 42 ");
	test_ft_atoi(" 42a");
	test_ft_atoi(" 42a42");
	test_ft_atoi(" 42a42 ");
	test_ft_atoi(" 42a42a");
	test_ft_atoi(" 42a42a ");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:56 by welee             #+#    #+#             */
/*   Updated: 2024/04/18 16:41:46 by welee            ###   ########.fr       */
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

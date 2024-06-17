/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:58:56 by welee             #+#    #+#             */
/*   Updated: 2024/06/17 13:11:41 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "libft.h"

void	test_ft_isnumber_valid_numbers(void)
{
	assert(ft_isnumber("123") == 1);
	assert(ft_isnumber("-123") == 1);
	assert(ft_isnumber("+123") == 1);
	assert(ft_isnumber("0") == 1);
	assert(ft_isnumber("0000123") == 1);
	assert(ft_isnumber("-0000123") == 1);
	assert(ft_isnumber("+0000123") == 1);
	assert(ft_isnumber("2147483647") == 1);
	assert(ft_isnumber("-2147483648") == 1);
	printf("test_ft_isnumber_valid_numbers passed.\n");
}

void	test_ft_isnumber_invalid_strings(void)
{
	assert(ft_isnumber("123abc") == 0);
	assert(ft_isnumber("abc123") == 0);
	assert(ft_isnumber("-") == 0);
	assert(ft_isnumber("+") == 0);
	assert(ft_isnumber("") == 0);
	printf("test_ft_isnumber_invalid_strings passed.\n");
}

void	test_ft_isnumber_edge_cases(void)
{
	assert(ft_isnumber("-0") == 1);
	assert(ft_isnumber("+0") == 1);
	assert(ft_isnumber("0000") == 1);
	assert(ft_isnumber("1234567890") == 1);
	assert(ft_isnumber("-1234567890") == 1);
	assert(ft_isnumber("+1234567890") == 1);
	printf("test_ft_isnumber_edge_cases passed.\n");
}

int	main(void)
{
	test_ft_isnumber_valid_numbers();
	test_ft_isnumber_invalid_strings();
	test_ft_isnumber_edge_cases();
	printf("All tests passed!\n");
	return (0);
}

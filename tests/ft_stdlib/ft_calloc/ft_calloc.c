/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:59:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 14:51:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	void	*std_ptr;

	ptr = ft_calloc(count, size);
	std_ptr = calloc(count, size);
	printf("case: count=%zu, size=%zu\n", count, size);
	assert(!ft_memcmp(ptr, std_ptr, count * size));
	free(ptr);
	free(std_ptr);
}

int	main(void)
{
	test_ft_calloc(0, 0);
	test_ft_calloc(0, 1);
	test_ft_calloc(1, 0);
	test_ft_calloc(1, 1);
	test_ft_calloc(1, 2);
	test_ft_calloc(2, 1);
	test_ft_calloc(2, 2);
	test_ft_calloc(2, 3);
	test_ft_calloc(3, 2);
	test_ft_calloc(3, 3);
	test_ft_calloc(3, 4);
	test_ft_calloc(4, 3);
	test_ft_calloc(4, 4);
	test_ft_calloc(4, 5);
	test_ft_calloc(5, 4);
	test_ft_calloc(5, 5);
	test_ft_calloc(5, 6);
	test_ft_calloc(6, 5);
	test_ft_calloc(6, 6);
	test_ft_calloc(6, 7);
	test_ft_calloc(7, 6);
	test_ft_calloc(7, 7);
	test_ft_calloc(7, 8);
}

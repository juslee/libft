/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:06:02 by welee             #+#    #+#             */
/*   Updated: 2024/04/22 15:15:28 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_bzero(size_t n)
{
	char	*std;
	char	*ft;

	std = malloc(n);
	ft = malloc(n);
	bzero(std, n);
	ft_bzero(ft, n);
	assert(memcmp(std, ft, n) == 0);
	free(std);
	free(ft);
}

int	main(void)
{
	test_ft_bzero(0);
	test_ft_bzero(1);
	test_ft_bzero(2);
	test_ft_bzero(3);
	test_ft_bzero(4);
	test_ft_bzero(5);
	test_ft_bzero(6);
	test_ft_bzero(7);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:27:24 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 23:36:10 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_putchar_fd(void)
{
	int	fd;
	int	c;

	fd = 1;
	c = 0;
	while (c < 128)
	{
		ft_putchar_fd(c, fd);
		++c;
	}
	printf("test_putchar_fd passed.\n");
}

int	main(void)
{
	test_putchar_fd();

	printf("ft_putchar_fd passed.\n");
	return (0);
}

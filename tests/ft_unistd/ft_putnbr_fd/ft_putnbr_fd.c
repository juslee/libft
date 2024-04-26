/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:45:20 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 23:46:02 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_putnbr_fd(void)
{
	int	fd;
	int	n;

	fd = 1;
	n = 0;
	while (n < 128)
	{
		ft_putnbr_fd(n, fd);
		ft_putchar_fd('\n', fd);
		++n;
	}
	printf("test_putnbr_fd passed.\n");
}

int	main(void)
{
	test_putnbr_fd();

	printf("ft_putnbr_fd passed.\n");
	return (0);
}

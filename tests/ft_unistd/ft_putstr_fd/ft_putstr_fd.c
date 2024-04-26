/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:35:38 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 23:36:33 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_putstr_fd(void)
{
	int	fd;
	char	*s;

	fd = 1;
	s = "Hello, World!";
	ft_putstr_fd(s, fd);
	printf("test_putstr_fd passed.\n");
}

int	main(void)
{
	test_putstr_fd();

	printf("ft_putstr_fd passed.\n");
	return (0);
}

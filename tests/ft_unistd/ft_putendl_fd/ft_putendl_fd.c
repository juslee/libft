/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:40:28 by welee             #+#    #+#             */
/*   Updated: 2024/04/26 23:41:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_putendl_fd(void)
{
	int		fd;
	char	*s;

	fd = 1;
	s = "Hello, World!";
	ft_putendl_fd(s, fd);
	printf("test_putendl_fd passed.\n");
}

int	main(void)
{
	test_putendl_fd();

	printf("ft_putendl_fd passed.\n");
	return (0);
}

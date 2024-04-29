/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:38:42 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:46:45 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_lstnew_non_null_content(void)
{
	int		x;
	t_list	*element;

	x = 42;
	element = ft_lstnew(&x);
	assert(element != NULL);
	assert(element->content == &x);
	assert(element->next == NULL);

	free(element);
}

void	test_ft_lstnew_null_content(void)
{
	t_list	*element;

	element = ft_lstnew(NULL);
	assert(element != NULL);
	assert(element->content == NULL);
	assert(element->next == NULL);

	free(element);
}

int	main(void)
{
	test_ft_lstnew_non_null_content();
	test_ft_lstnew_null_content();

	printf("All tests passed!\n");
	return (0);
}

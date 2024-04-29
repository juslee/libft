/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:49:35 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:53:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_lstadd_front_to_empty_list(void)
{
	t_list	*head;
	int		x;
	t_list	*new;

	head = NULL;
	x = 42;
	new = ft_lstnew(&x);
	ft_lstadd_front(&head, new);
	assert(head == new);
	assert(head->next == NULL);
	free(new);
}

void	test_ft_lstadd_front_to_existing_list(void)
{
	int		values[] = {42, 43};
	t_list	*head;
	t_list	*new;

	head = ft_lstnew(&values[1]);
	new = ft_lstnew(&values[0]);
	ft_lstadd_front(&head, new);
	assert(head == new);
	assert(head->next != NULL);
	assert(head->next->content == &values[1]);
	free(head->next);
	free(head);
}

void	test_ft_lstadd_front_null_new(void)
{
	int		x;
	t_list	*head;
	t_list	*original_head;

	x = 42;
	head = ft_lstnew(&x);
	original_head = head;
	ft_lstadd_front(&head, NULL);
	assert(head == original_head);
	free(head);
}

void	test_ft_lstadd_front_null_list(void)
{
	int		x;
	t_list	*new;

	x = 42;
	new = ft_lstnew(&x);
	ft_lstadd_front(NULL, new);
	free(new);
}

int	main(void)
{
	test_ft_lstadd_front_to_empty_list();
	test_ft_lstadd_front_to_existing_list();
	test_ft_lstadd_front_null_new();
	test_ft_lstadd_front_null_list();

	printf("All tests passed!\n");
	return (0);
}

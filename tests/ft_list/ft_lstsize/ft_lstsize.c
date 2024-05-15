/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:54:50 by welee             #+#    #+#             */
/*   Updated: 2024/05/15 11:05:48 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

// Helper function to create a new list node
t_list	*create_new_node(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}

// Helper function to clean up list memory
void	free_list(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

void	test_ft_lstsize_empty_list(void)
{
	t_list	*head;

	head = NULL;
	assert(ft_lstsize(head) == 0);
	printf("test_ft_lstsize_empty_list passed.\n");
}

void	test_ft_lstsize_single_element(void)
{
	int		x;
	t_list	*head;

	x = 42;
	head = create_new_node(&x);
	assert(ft_lstsize(head) == 1);
	printf("test_ft_lstsize_single_element passed.\n");
	free_list(head);
}

void	test_ft_lstsize_multiple_elements(void)
{
	int		values[3];
	t_list	*head;

	values[0] = 42;
	values[1] = 43;
	values[2] = 44;
	head = create_new_node(&values[0]);
	head->next = create_new_node(&values[1]);
	head->next->next = create_new_node(&values[2]);

	assert(ft_lstsize(head) == 3);
	printf("test_ft_lstsize_multiple_elements passed.\n");
	free_list(head);
}

int	main(void)
{
	test_ft_lstsize_empty_list();
	test_ft_lstsize_single_element();
	test_ft_lstsize_multiple_elements();

	printf("All tests passed!\n");
	return (0);
}

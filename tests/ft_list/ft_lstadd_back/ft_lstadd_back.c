/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:06:45 by welee             #+#    #+#             */
/*   Updated: 2024/04/30 00:11:59 by welee            ###   ########.fr       */
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

void	test_ft_lstadd_back_empty_list(void)
{
	t_list	*head;
	int		x;
	t_list	*new;

	head = NULL;
	x = 42;
	new = create_new_node(&x);
	ft_lstadd_back(&head, new);
	assert(head == new);
	assert(head->next == NULL);
	free(new);
}

void	test_ft_lstadd_back_single_element(void)
{
	int		x;
	t_list	*head;
	int		y;
	t_list	*new;

	x = 42;
	head = create_new_node(&x);
	y = 43;
	new = create_new_node(&y);
	ft_lstadd_back(&head, new);
	assert(head->next == new);
	assert(head->next->content == &y);
	free_list(head);
}

void	test_ft_lstadd_back_multiple_elements(void)
{
	int		values[] = {42, 43, 44};
	t_list	*head;
	t_list	*second;
	t_list	*new;

	head = create_new_node(&values[0]);
	second = create_new_node(&values[1]);
	head->next = second;
	new = create_new_node(&values[2]);
	ft_lstadd_back(&head, new);
	assert(second->next == new);
	assert(second->next->content == &values[2]);
	free_list(head);
}

void	test_ft_lstadd_back_with_null_new(void)
{
	int		x;
	t_list	*head;
	t_list	*original_head;

	x = 42;
	head = create_new_node(&x);
	original_head = head;
	ft_lstadd_back(&head, NULL);
	assert(head == original_head);
	free_list(head);
}

int	main(void)
{
	test_ft_lstadd_back_empty_list();
	test_ft_lstadd_back_single_element();
	test_ft_lstadd_back_multiple_elements();
	test_ft_lstadd_back_with_null_new();

	printf("All tests passed!\n");
	return (0);
}

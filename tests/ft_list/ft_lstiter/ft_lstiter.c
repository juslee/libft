/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:25:41 by welee             #+#    #+#             */
/*   Updated: 2024/04/30 00:30:36 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

// Dummy function to apply to list contents
void	increment_content(void *content)
{
	int	*p;

	p = (int *)content;
	(*p)++;
}

// Helper function to create a new node
t_list	*new_node(int content)
{
	int		*p;
	t_list	*node;

	p = (int *)malloc(sizeof(int));
	*p = content;
	node = (t_list *)malloc(sizeof(t_list));
	if (node && p)
	{
		node->content = p;
		node->next = NULL;
	}
	return (node);
}

// Helper function to append node to the end of the list
void	list_append(t_list **head, t_list *new_node)
{
	t_list	*temp;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void	test_ft_lstiter_empty_list(void)
{
	t_list	*head;

	head = NULL;
	ft_lstiter(head, increment_content);
	assert(head == NULL);
}

void	test_ft_lstiter_single_node(void)
{
	t_list	*head;

	head = new_node(10);
	ft_lstiter(head, increment_content);
	assert(*(int *)(head->content) == 11);
	free(head->content);
	free(head);
}

void	test_ft_lstiter_multiple_nodes(void)
{
	t_list	*head;
	t_list	*tmp;

	head = new_node(10);
	list_append(&head, new_node(20));
	list_append(&head, new_node(30));

	ft_lstiter(head, increment_content);
	assert(*(int *)(head->content) == 11);
	assert(*(int *)(head->next->content) == 21);
	assert(*(int *)(head->next->next->content) == 31);

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->content);
		free(tmp);
	}
}

int	main(void)
{
	test_ft_lstiter_empty_list();
	test_ft_lstiter_single_node();
	test_ft_lstiter_multiple_nodes();
	printf("All tests passed!\n");
	return (0);
}

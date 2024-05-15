/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:20:26 by welee             #+#    #+#             */
/*   Updated: 2024/05/15 11:11:34 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

// Dummy function to mimic content deletion
void	dummy_del(void *content)
{
	free(content);
}

// Helper function to create a new node with dynamically allocated content
t_list	*new_node(const char *content)
{
	char	*dup_content;
	t_list	*node;

	dup_content = ft_strdup(content);
	node = (t_list *)malloc(sizeof(t_list));
	if (node && dup_content)
	{
		node->content = dup_content;
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

void	test_ft_lstclear_empty_list(void)
{
	t_list	*head;

	head = NULL;
	ft_lstclear(&head, dummy_del);
	assert(head == NULL);
	printf("test_ft_lstclear_empty_list passed.\n");
}

void	test_ft_lstclear_single_node(void)
{
	t_list	*head;

	head = new_node("Hello");
	ft_lstclear(&head, dummy_del);
	assert(head == NULL);
	printf("test_ft_lstclear_single_node passed.\n");
}

void	test_ft_lstclear_multiple_nodes(void)
{
	t_list	*head;

	head = new_node("Hello");
	list_append(&head, new_node("World"));
	list_append(&head, new_node("Libft"));

	ft_lstclear(&head, dummy_del);
	assert(head == NULL);
	printf("test_ft_lstclear_multiple_nodes passed.\n");
}

int	main(void)
{
	test_ft_lstclear_empty_list();
	test_ft_lstclear_single_node();
	test_ft_lstclear_multiple_nodes();
	printf("All tests passed!\n");
	return (0);
}

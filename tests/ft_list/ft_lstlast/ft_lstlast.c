/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:01:08 by welee             #+#    #+#             */
/*   Updated: 2024/04/30 00:33:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

// Helper function to create a new list node
t_list	*new_node(void *content)
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

// Function to append node at end of the list
void	append_node(t_list **head, t_list *new_node)
{
	t_list	*tmp;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
}

// Helper function to free the list
void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	test_ft_lstlast_empty_list(void)
{
	t_list	*head;

	head = NULL;
	assert(ft_lstlast(head) == NULL);
}

void	test_ft_lstlast_single_element(void)
{
	int		x;
	t_list	*head;

	x = 42;
	head = new_node(&x);
	assert(ft_lstlast(head) == head);

	free_list(head);
}

void	test_ft_lstlast_multiple_elements(void)
{
	int		values[] = {42, 43, 44};
	t_list	*head;
	t_list	*last;

	head = new_node(&values[0]);
	append_node(&head, new_node(&values[1]));
	append_node(&head, new_node(&values[2]));

	last = ft_lstlast(head);
	assert(last != NULL);
	assert(last->content == &values[2]);

	free_list(head);
}

int	main(void)
{
	test_ft_lstlast_empty_list();
	test_ft_lstlast_single_element();
	test_ft_lstlast_multiple_elements();

	printf("All tests passed!\n");
	return (0);
}

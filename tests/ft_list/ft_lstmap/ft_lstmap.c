/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:34:22 by welee             #+#    #+#             */
/*   Updated: 2024/05/15 11:07:20 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// Transformation function to apply
void	*increment_content(void *content)
{
	int	*new_value;

	new_value = (int *)malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = *(int *)content + 1;
	return (new_value);
}

// Deletion function to clean up content
void	del(void *content)
{
	free(content);
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

void	test_ft_lstmap_empty_list(void)
{
	t_list	*head;
	t_list	*result;

	head = NULL;
	result = ft_lstmap(head, increment_content, del);
	assert(result == NULL);
	printf("test_ft_lstmap_empty_list passed.\n");
}

void	test_ft_lstmap_single_node(void)
{
	t_list	*head;
	t_list	*result;

	head = new_node(10);
	result = ft_lstmap(head, increment_content, del);
	assert(result != NULL);
	assert(*(int *)result->content == 11);
	printf("test_ft_lstmap_single_node passed.\n");
	ft_lstdelone(result, del);
	ft_lstdelone(head, del);
}

void	test_ft_lstmap_multiple_nodes(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*result;

	head = new_node(10);
	second = new_node(20);
	head->next = second;

	result = ft_lstmap(head, increment_content, del);
	assert(result != NULL);
	assert(*(int *)result->content == 11);
	assert(*(int *)result->next->content == 21);
	printf("test_ft_lstmap_multiple_nodes passed.\n");

	ft_lstdelone(head, del);
	ft_lstdelone(second, del);
	ft_lstclear(&result, del);
}

int	main(void)
{
	test_ft_lstmap_empty_list();
	test_ft_lstmap_single_node();
	test_ft_lstmap_multiple_nodes();

	printf("All tests passed!\n");
	return (0);
}

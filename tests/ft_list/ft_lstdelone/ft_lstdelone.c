/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:13:05 by welee             #+#    #+#             */
/*   Updated: 2024/04/30 00:32:22 by welee            ###   ########.fr       */
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

// Helper function to create a new list node
t_list	*new_node(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = NULL;
	}
	return (node);
}

void	test_ft_lstdelone_free_node(void)
{
	char	*content;
	t_list	*node;

	content = ft_strdup("Hello, world!");
	node = new_node(content);
	ft_lstdelone(node, dummy_del);
}

void	test_ft_lstdelone_handle_null(void)
{
	ft_lstdelone(NULL, dummy_del);
}

void	test_ft_lstdelone_null_del_function(void)
{
	char	*content;
	t_list	*node;

	content = ft_strdup("Hello, world!");
	node = new_node(content);
	ft_lstdelone(node, NULL);
	free(node);
	free(content);
}

int	main(void)
{
	test_ft_lstdelone_free_node();
	test_ft_lstdelone_handle_null();
	test_ft_lstdelone_null_del_function();

	printf("All tests passed!\n");
	return (0);
}

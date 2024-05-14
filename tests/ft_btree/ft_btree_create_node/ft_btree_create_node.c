/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:21:11 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 10:22:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

void	test_node_creation_with_valid_item(void)
{
	int		value;
	t_btree	*node;

	value = 42;
	node = ft_btree_create_node(&value);
	assert(node != NULL);
	assert(node->item == &value);
	assert(node->left == NULL);
	assert(node->right == NULL);
	free(node);
	printf("test_node_creation_with_valid_item: OK\n");
}

void	test_node_creation_with_null_item(void)
{
	t_btree	*node;

	node = ft_btree_create_node(NULL);
	assert(node != NULL);
	assert(node->item == NULL);
	assert(node->left == NULL);
	assert(node->right == NULL);
	free(node);
	printf("test_node_creation_with_null_item: OK\n");
}

int	main(void)
{
	test_node_creation_with_valid_item();
	test_node_creation_with_null_item();

	printf("All tests passed!\n");
	return (0);
}

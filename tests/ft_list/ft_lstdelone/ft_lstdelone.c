/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:13:05 by welee             #+#    #+#             */
/*   Updated: 2024/05/15 13:17:34 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

typedef struct s_complex_content
{
	int		a;
	char	*b;
}	t_complex_content;

// Helper function to create a new list element
t_list	*create_element(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

// Custom delete function for testing
void	del(void *content)
{
	free(content);
}

// Test 1: Deletes an element and its content
void	test_ft_lstdelone_deletes_element_and_content(void)
{
	char	*content;
	t_list	*element;

	content = ft_strdup("Test content");
	element = create_element(content);
	assert(element != NULL);
	assert(element->content == content);

	ft_lstdelone(element, del);
	printf("test_ft_lstdelone_deletes_element_and_content passed\n");
}

// Test 2: Handles NULL input gracefully
void	test_ft_lstdelone_handles_null_input(void)
{
	ft_lstdelone(NULL, del);
	ft_lstdelone(create_element(ft_strdup("Test content")), NULL);

	printf("test_ft_lstdelone_handles_null_input passed\n");
}

// Test 3: Works with more complex content
void	test_ft_lstdelone_complex_content(void)
{
	t_complex_content	*content;
	t_list				*element;

	content = (t_complex_content *)malloc(sizeof(t_complex_content));
	content->a = 42;
	content->b = strdup("Complex content");

	element = create_element(content);

	assert(element != NULL);
	assert(element->content == content);

	ft_lstdelone(element, del);

	printf("test_ft_lstdelone_complex_content passed\n");
}

// Test 4: Multiple calls to ft_lstdelone
void	test_ft_lstdelone_multiple_calls(void)
{
	char	*content1;
	char	*content2;
	t_list	*element1;
	t_list	*element2;

	content1 = ft_strdup("Content 1");
	content2 = ft_strdup("Content 2");
	element1 = create_element(content1);
	element2 = create_element(content2);
	assert(element1 != NULL);
	assert(element2 != NULL);

	ft_lstdelone(element1, del);
	ft_lstdelone(element2, del);

	printf("test_ft_lstdelone_multiple_calls passed\n");
}

int	main(void)
{
	test_ft_lstdelone_deletes_element_and_content();
	test_ft_lstdelone_handles_null_input();
	test_ft_lstdelone_complex_content();
	test_ft_lstdelone_multiple_calls();

	printf("All tests passed successfully.\n");
	return (0);
}

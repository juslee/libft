/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:14:39 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 16:36:40 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_with_integers(void)
	{
	int	true_int;
	int	false_int;
	int	*result;

	true_int = 42;
	false_int = 24;

	result = (int *)ft_ternary(1, &true_int, &false_int);
	assert(*result == 42 && "test_with_integers failed on true condition");

	result = (int *)ft_ternary(0, &true_int, &false_int);
	assert(*result == 24 && "test_with_integers failed on false condition");

	printf("test_with_integers passed.\n");
}

void	test_with_strings(void)
{
	char	*true_str;
	char	*false_str;
	char	**result;

	true_str = "true";
	false_str = "false";

	result = (char **)ft_ternary(1, &true_str, &false_str);
	assert(ft_strcmp(*result, "true") == 0
		&& "test_with_strings failed on true condition");

	result = (char **)ft_ternary(0, &true_str, &false_str);
	assert(ft_strcmp(*result, "false") == 0
		&& "test_with_strings failed on false condition");

	printf("test_with_strings passed.\n");
}

void	say_hello(void)
{
	printf("Hello\n");
}

void	say_goodbye(void)
{
	printf("Goodbye\n");
}

void	test_with_function_pointers(void)
{
	void	(*hello_ptr)();
	void	(*goodbye_ptr)();
	void	(*result)();

	hello_ptr = say_hello;
	goodbye_ptr = say_goodbye;

	result = (void (*)())ft_ternary(1, hello_ptr, goodbye_ptr);
	assert(result == hello_ptr
		&& "test_with_function_pointers failed on true condition");

	result = (void (*)())ft_ternary(0, hello_ptr, goodbye_ptr);
	assert(result == goodbye_ptr
		&& "test_with_function_pointers failed on false condition");

	printf("test_with_function_pointers passed.\n");
}

int	main(void)
{
	test_with_integers();
	test_with_strings();
	test_with_function_pointers();

	printf("All tests passed!\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:39:46 by welee             #+#    #+#             */
/*   Updated: 2024/04/29 23:14:47 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void	capitalize(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32 + i;
}

// Test normal string transformation
void	test_striteri_normal(void)
{
	char	str[] = "abcde";

	ft_striteri(str, capitalize);
	printf("%s\n", str);
	assert(strcmp(str, "ACEGI") == 0);
	printf("Test Normal Transformation Passed: %s\n", str);
}

// Test empty string
void	test_striteri_empty(void)
{
	char	str[] = "";

	ft_striteri(str, capitalize);
	assert(strcmp(str, "") == 0);
	printf("Test Empty String Passed: %s\n", str);
}

// Test NULL string
void	test_striteri_null_string(void)
{
	ft_striteri(NULL, capitalize);
	printf("Test NULL String Passed\n");
}

// Test NULL function pointer
void	test_striteri_null_function(void)
{
	char	str[] = "abcde";;

	ft_striteri(str, NULL);
	printf("Test NULL Function Pointer Passed\n");
}

int	main(void)
{
	test_striteri_normal();
	test_striteri_empty();
	test_striteri_null_string();
	test_striteri_null_function();

	printf("All tests completed successfully.\n");
	return (0);
}

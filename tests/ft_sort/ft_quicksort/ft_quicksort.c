/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:47:34 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:56:07 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

// Comparator function for integers
int	cmp_int(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

// Comparator function for strings
int	cmp_str(void *a, void *b)
{
	return (ft_strcmp(*(char **)a, *(char **)b));
}

// Test Case 1: Basic Sorting with Integers
void	test_case_1(void)
{
	int		values[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
	void	*array[11];
	void	*sorted_array[11];
	int		sorted_values[] = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};

	for (int i = 0; i < 11; i++)
	{
		array[i] = &values[i];
		sorted_array[i] = &sorted_values[i];
	}
	ft_quicksort(array, 0, 10, cmp_int);
	for (int i = 0; i < 11; i++)
		assert(*(int *)array[i] == *(int *)sorted_array[i]);
	printf("Test Case 1 Passed\n");
}

// Test Case 2: Already Sorted Array
void	test_case_2(void)
{
	int		values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	void	*array[9];

	for (int i = 0; i < 9; i++)
		array[i] = &values[i];
	ft_quicksort(array, 0, 8, cmp_int);
	for (int i = 0; i < 9; i++)
		assert(*(int *)array[i] == values[i]);
	printf("Test Case 2 Passed\n");
}

// Test Case 3: Reverse Sorted Array
void	test_case_3(void)
{
	int		values[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	void	*array[9];
	int		sorted_values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	void	*sorted_array[9];

	for (int i = 0; i < 9; i++)
	{
		array[i] = &values[i];
		sorted_array[i] = &sorted_values[i];
	}
	ft_quicksort(array, 0, 8, cmp_int);
	for (int i = 0; i < 9; i++)
		assert(*(int *)array[i] == *(int *)sorted_array[i]);
	printf("Test Case 3 Passed\n");
}

// Test Case 4: Array with Duplicate Elements
void	test_case_4(void)
{
	int     values[] = {5, 3, 8, 3, 7, 3, 2, 3, 1};
	void    *array[9];
	int     sorted_values[] = {1, 2, 3, 3, 3, 3, 5, 7, 8};
	void    *sorted_array[9];

	for (int i = 0; i < 9; i++)
	{
		array[i] = &values[i];
		sorted_array[i] = &sorted_values[i];
	}
	ft_quicksort(array, 0, 8, cmp_int);
	for (int i = 0; i < 9; i++)
		assert(*(int *)array[i] == *(int *)sorted_array[i]);
	printf("Test Case 4 Passed\n");
}

// Test Case 5: Single Element Array
void	test_case_5(void)
{
	int		value = 42;
	void	*array[1] = {&value};

	ft_quicksort(array, 0, 0, cmp_int);
	assert(*(int *)array[0] == value);
	printf("Test Case 5 Passed\n");
}

// Test Case 6: Empty Array
void	test_case_6(void)
{
	void	*array[0];

	ft_quicksort(array, 0, -1, NULL);
	// No assertion needed as the array is empty
	printf("Test Case 6 Passed\n");
}

// Test Case 7: Basic Sorting with Strings
void	test_case_7(void)
{
	char	*values[] = {"banana", "apple", "cherry", "date"};
	void	*array[4];
	char	*sorted_values[] = {"apple", "banana", "cherry", "date"};
	void	*sorted_array[4];

	for (int i = 0; i < 4; i++)
	{
		array[i] = &values[i];
		sorted_array[i] = &sorted_values[i];
	}
	ft_quicksort(array, 0, 3, cmp_str);
	for (int i = 0; i < 4; i++)
		assert(ft_strcmp(*(char **)array[i], *(char **)sorted_array[i]) == 0);
	printf("Test Case 7 Passed\n");
}

int	main(void)
{
	test_case_1();
	test_case_2();
	test_case_3();
	test_case_4();
	test_case_5();
	test_case_6();
	test_case_7();

	printf("All Test Cases Passed\n");
	return (0);
}

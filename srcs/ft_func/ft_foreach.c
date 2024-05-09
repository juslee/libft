/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:52:23 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 13:22:13 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_foreach.c
 * @brief Iterates through the tab and applies the function f to each element
 */

/**
 * @brief Iterates through the tab and applies the function f to each element
 * @param tab Array to iterate
 * @param length Size of the array
 * @param f Function to apply
 */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	idx;

	idx = 0;
	while (idx < length)
	{
		f(tab[idx]);
		idx++;
	}
}

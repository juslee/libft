/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selectionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:56:39 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:33:01 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_selectionsort(void **arr, int n, int (*cmp)(void *, void *))
{
	int		i;
	int		j;
	int		min_idx;

	i = 0;
	while (i < n - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < n)
		{
			if (cmp(arr[j], arr[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
			ft_swap(&arr[min_idx], &arr[i]);
		i++;
	}
}

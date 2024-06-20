/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:48:49 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:32:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_partition(void **arr, int low, int high,
							int (*cmp)(void *, void *))
{
	void	*pivot;
	int		i;
	int		j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (cmp(arr[j], pivot) < 0)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	ft_quicksort(void **arr, int low, int high, int (*cmp)(void *, void *))
{
	int	pi;

	if (low < high)
	{
		pi = ft_partition(arr, low, high, cmp);
		ft_quicksort(arr, low, pi - 1, cmp);
		ft_quicksort(arr, pi + 1, high, cmp);
	}
}

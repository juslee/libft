/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:47:14 by welee             #+#    #+#             */
/*   Updated: 2024/06/20 16:32:40 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORT_H
# define FT_SORT_H

void	ft_swap(void **a, void **b);

void	ft_quicksort(void **arr, int low, int high, int (*cmp)(void *, void *));
void	ft_insertionsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_bubblesort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_selectionsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_mergesort(void **arr, int l, int r, int (*cmp)(void *, void *));
void	ft_heapsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_countingsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_radixsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_shellsort(void **arr, int n, int (*cmp)(void *, void *));
void	ft_timsort(void **arr, int n, int (*cmp)(void *, void *));
#endif

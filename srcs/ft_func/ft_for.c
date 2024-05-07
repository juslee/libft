/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:13:01 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 16:13:54 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_for.c
 * @brief loop from start to end
 */
void	ft_for(int start, int end, void (*f)(int))
{
	while (start < end)
	{
		f(start);
		start++;
	}
}

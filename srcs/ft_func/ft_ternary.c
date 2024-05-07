/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:51:41 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 16:14:02 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_ternary.c
 * @brief return true_value if condition is true, else return false_value
 */
void	*ft_ternary(int condition, void *true_value, void *false_value)
{
	if (condition)
		return (true_value);
	else
		return (false_value);
}

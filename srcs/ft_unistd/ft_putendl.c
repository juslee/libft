/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:06:02 by welee             #+#    #+#             */
/*   Updated: 2024/05/07 13:07:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putendl.c
 * @brief print a string followed by a newline
 */

#include "libft.h"

/**
 * @brief print a string followed by a newline
 * @param s string to be printed
 */
void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

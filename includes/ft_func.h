/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:52:18 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 13:42:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNC_H
# define FT_FUNC_H

// Function pointer prototypes
void	*ft_ternary(int condition, void *true_value, void *false_value);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_any(char **tab, int (*f)(const char *));
int		*ft_map(int *tab, int length, int (*f)(int));
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:52:18 by welee             #+#    #+#             */
/*   Updated: 2024/06/16 12:08:11 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNC_H
# define FT_FUNC_H

// Function pointer prototypes
void	*ft_ternary(int condition, void *true_value, void *false_value);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_any(char **tab, int (*f)(const char *));

typedef void	*(*t_map_func)(void *);
typedef void	*(*t_reduce_func)(void *, void *);

void	*ft_map(void *array, size_t count, t_map_func func);
void	*ft_reduce(void *array, size_t count, t_reduce_func func,
			void *initial);
#endif

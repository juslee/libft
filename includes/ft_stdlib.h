/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:36:49 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 17:46:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H
# include <stddef.h>

// Memory manipulation functions
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
#endif

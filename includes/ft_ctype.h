/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:36:02 by welee             #+#    #+#             */
/*   Updated: 2024/05/14 17:27:45 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

// C Type functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

// Additional C Type functions
// int		ft_isupper(int c);
// int		ft_islower(int c);
// int		ft_isspace(int c);
// int		ft_isblank(int c);
// int		ft_iscntrl(int c);
// int		ft_isgraph(int c);
// int		ft_ispunct(int c);
// int		ft_isxdigit(int c);
#endif

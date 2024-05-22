/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_extra.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:16:33 by welee             #+#    #+#             */
/*   Updated: 2024/05/22 10:40:48 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_EXTRA_H
# define FT_STRING_EXTRA_H
# include <stddef.h>

// Additional string functions
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strndup(const char *s, size_t n);

// Additional memory functions
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
#endif

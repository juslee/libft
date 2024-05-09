/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:03:24 by welee             #+#    #+#             */
/*   Updated: 2024/05/09 15:17:27 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

// Binary tree structure
typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

// Binary tree manipulation functions
t_btree	*ft_btree_create_node(void *item);
void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	ft_btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *));
t_btree	*ft_btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *));
int		ft_btree_level_count(t_btree *root);
void	ft_btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem));
#endif

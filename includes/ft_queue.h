/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:40:00 by welee             #+#    #+#             */
/*   Updated: 2024/05/02 12:53:57 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H
# include <sys/types.h>
# include "ft_list.h"

typedef struct s_queue
{
	t_list	*front;
	t_list	*rear;
	size_t	size;
	ssize_t	max_size;
}	t_queue;

// Queue manipulation functions
void	ft_queue_new(t_queue *queue, ssize_t max_size);
int		ft_queue_enqueue(t_queue *queue, void *content);
void	*ft_queue_dequeue(t_queue *queue);
int		ft_queue_is_empty(t_queue *queue);
int		ft_queue_is_full(t_queue *queue);
void	ft_queue_clear(t_queue *queue, void (*free_content)(void *));
#endif

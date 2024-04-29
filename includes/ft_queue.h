/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:40:00 by welee             #+#    #+#             */
/*   Updated: 2024/04/30 01:00:14 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

typedef struct s_queue
{
	void			*content;
	struct s_queue	*next;
}	t_queue;

// Queue manipulation functions
t_queue	*ft_queue_new(void *content);
void	ft_queue_enqueue(t_queue **queue, t_queue *new);
t_queue	*ft_queue_dequeue(t_queue **queue);
void	*ft_queue_peek(t_queue *queue);
int		ft_queue_size(t_queue *queue);
void	ft_queue_clear(t_queue **queue, void (*del)(void*));
#endif

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:02:52 by welee             #+#    #+#              #
#    Updated: 2024/05/14 14:57:51 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
MKDIR = mkdir -p

SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

all: ${NAME}

$(NAME): $(OBJS)
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all dist

.PHONY: all clean fclean re

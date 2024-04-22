# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:35:06 by welee             #+#    #+#              #
#    Updated: 2024/04/22 13:47:24 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests
SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c=.o)
EXECS = $(SRCS:.c=)
INCLUDES = -I ../includes

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L../bin -lft

all: $(EXECS)
%: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LFLAGS) -o $@ $<
	$@
	$(RM) $@
clean:
	${RM} $(OBJS) $(EXECS)
fclean: clean
	${RM} $(NAME)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:35:06 by welee             #+#    #+#              #
#    Updated: 2024/04/18 15:33:50 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests
SRCS = $(shell find -name '*.c')
BINS = $(SRCS:%.c=%)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): $(SRCS)
	$(MKDIR) $(BINS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^
clean:
	${RM} ${BIN}
fclean: clean
	${RM} ${NAME}
re: fclean all

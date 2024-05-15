# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:02:52 by welee             #+#    #+#              #
#    Updated: 2024/05/15 13:56:32 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
MKDIR = mkdir -p

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_strlen.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcpy.c \
	ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c
BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
	ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
OBJS = $(SRCS:%.c=%.o)
BOBJS = $(BSRCS:%.c=%.o)

all: ${NAME}

$(NAME): $(OBJS)
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(NAME) $(BOBJS)
	${LIBC} ${NAME} ${BOBJS}

.PHONY: all clean fclean re bonus

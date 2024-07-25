# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:35:06 by welee             #+#    #+#              #
#    Updated: 2024/07/22 17:40:43 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests
# SRCS = $(shell find . \
# 	-name ft_isalpha.c -or -name ft_isdigit.c -or -name ft_isalnum.c -or -name ft_isascii.c -or -name ft_isprint.c \
# 	-or -name ft_toupper.c -or -name ft_tolower.c -or -name ft_strchr.c -or -name ft_strrchr.c -or -name ft_strncmp.c \
# 	-or -name ft_strlen.c -or -name ft_bzero.c -or -name ft_memset.c -or -name ft_memchr.c -or -name ft_memcpy.c \
# 	-or -name ft_memcmp.c -or -name ft_memmove.c -or -name ft_strlcpy.c -or -name ft_strlcat.c -or -name ft_strnstr.c \
# 	-or -name ft_atoi.c -or -name ft_calloc.c -or -name ft_strdup.c \
# 	-or -name ft_substr.c -or -name ft_strjoin.c -or -name ft_strtrim.c -or -name ft_split.c -or -name ft_itoa.c \
# 	-or -name ft_strmapi.c -or -name ft_striteri.c -or -name ft_putchar_fd.c -or -name ft_putstr_fd.c -or -name ft_putendl_fd.c \
# 	-or -name ft_putnbr_fd.c)
# BONUS_SRCS = $(shell find . \
# 	-name ft_lstnew.c -or -name ft_lstadd_front.c -or -name ft_lstclear.c -or -name ft_lstiter.c -or -name ft_lstmap.c \
# 	-or -name ft_lstsize.c -or -name ft_lstlast.c -or -name ft_lstadd_back.c -or -name ft_lstdelone.c)
SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c=.o)
EXECS = $(SRCS:.c=)
# # OBJS = $(SRCS:.c=.o)
# # BONUS_OBJS = $(BONUS_SRCS:.c=.o)
# # EXECS = $(SRCS:.c=)
# BONUS_EXECS = $(BONUS_SRCS:.c=)
INCLUDES = -I ../includes

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L../bin -lft
UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
# macOS specific settings
	CFLAGS += -DDEFAULT_INCLUDE
else ifeq ($(UNAME), Linux)
# Linux specific settings
	CFLAGS += -I/usr/include/bsd
	LDFLAGS += -lbsd
endif

all_all: $(EXECS_ALL)

all: $(EXECS) $(BONUS_EXECS)
%: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $< $(LDFLAGS)
	$@
#	$(RM) $@
clean:
	${RM} $(OBJS) $(EXECS)
	${RM} $(BONUS_OBJS) $(BONUS_EXECS)
fclean: clean
#	${RM} $(NAME)
re: fclean all

.PHONY: all clean fclean re

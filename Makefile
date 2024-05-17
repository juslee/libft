# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:02:52 by welee             #+#    #+#              #
#    Updated: 2024/05/17 10:11:28 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PUBLIC_DIR = public
SRCS_DIR = srcs
OBJS_DIR = objs
INCLUDES_DIR = includes
TEST_DIR = tests
DIST_DIR = dist
BIN_DIR = bin
DOCS_DIR = docs

INCLUDES = -I ${INCLUDES_DIR}
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
MKDIR = mkdir -p
MAKE = make -C
CD = cd
FRANCINETTE = francinette
FRANCINETTE_FLAGS = -s

SRCS = $(shell find $(SRCS_DIR) \
	-name ft_isalpha.c -or -name ft_isdigit.c -or -name ft_isalnum.c -or -name ft_isascii.c -or -name ft_isprint.c \
	-or -name ft_toupper.c -or -name ft_tolower.c -or -name ft_strchr.c -or -name ft_strrchr.c -or -name ft_strncmp.c \
	-or -name ft_strlen.c -or -name ft_bzero.c -or -name ft_memset.c -or -name ft_memchr.c -or -name ft_memcpy.c \
	-or -name ft_memcmp.c -or -name ft_memmove.c -or -name ft_strlcpy.c -or -name ft_strlcat.c -or -name ft_strnstr.c \
	-or -name ft_atoi.c -or -name ft_calloc.c -or -name ft_strdup.c \
	-or -name ft_substr.c -or -name ft_strjoin.c -or -name ft_strtrim.c -or -name ft_split.c -or -name ft_itoa.c \
	-or -name ft_strmapi.c -or -name ft_striteri.c -or -name ft_putchar_fd.c -or -name ft_putstr_fd.c -or -name ft_putendl_fd.c \
	-or -name ft_putnbr_fd.c \
	-or -name ft_lstnew_bonus.c -or -name ft_lstadd_front_bonus.c -or -name ft_lstclear_bonus.c -or -name ft_lstiter_bonus.c -or -name ft_lstmap_bonus.c \
	-or -name ft_lstsize_bonus.c -or -name ft_lstlast_bonus.c -or -name ft_lstadd_back_bonus.c -or -name ft_lstdelone_bonus.c)
# SRCS = $(shell find $(SRCS_DIR) -name '*.c')
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)
# HEADER = $(shell find $(INCLUDES_DIR) -name '*.h')
HEADERS = $(shell find $(INCLUDES_DIR) \
	-name ft_ctype.h -or -name ft_stdlib.h -or -name ft_string.h -or -name ft_list.h -or -name ft_unistd.h)
COMBINED_HEADER = $(DIST_DIR)/libft.h

NORM = norminette
NORM_FLAGS = -R CheckForbiddenSourceHeader -R CheckDefine

DOXYGEN = doxygen
DOXYGEN_CONFIG = Doxyfile

all: ${NAME}

$(NAME): $(OBJS) $(COMBINED_HEADER)
	$(MKDIR) $(BIN_DIR)
	mv $(COMBINED_HEADER) $(BIN_DIR)
	$(LIBC) $(BIN_DIR)/$(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -r $(DIST_DIR)
	$(RM) -r $(DOCS_DIR)
	$(MAKE) $(TEST_DIR) clean

fclean: clean
	$(RM) $(BIN_DIR)/libft.h
	$(RM) $(BIN_DIR)/$(NAME)

re: fclean all dist

norm:
	$(NORM) $(NORM_FLAGS) $(SRCS_DIR) $(INCLUDES_DIR) $(PUBLIC_DIR)

$(COMBINED_HEADER): $(HEADERS)
	@$(MKDIR) $(DIST_DIR)
	@echo "/* ************************************************************************** */" > $@
	@echo "/*                                                                            */" >> $@
	@echo "/*                                                        :::      ::::::::   */" >> $@
	@echo "/*   libft.h                                            :+:      :+:    :+:   */" >> $@
	@echo "/*                                                    +:+ +:+         +:+     */" >> $@
	@echo "/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */" >> $@
	@echo "/*                                                +#+#+#+#+#+   +#+           */" >> $@
	@echo "/*   Created: `date "+%Y/%m/%d %H:%M:%S"` by welee             #+#    #+#             */" >> $@
	@echo "/*   Updated: `date "+%Y/%m/%d %H:%M:%S"` by welee            ###   ########.fr       */" >> $@
	@echo "/*                                                                            */" >> $@
	@echo "/* ************************************************************************** */" >> $@
	@echo "" >> $@
	@echo "#ifndef LIBFT_H" >> $@
	@echo "# define LIBFT_H" >> $@
	@echo "# include <stddef.h>" >> $@
	@echo "# include <sys/types.h>" >> $@
	@$(foreach hdr,$(HEADERS),cat $(hdr) | sed -e '1,/^#ifndef FT_.*_H/d' -e '/^#endif/d' -e '/^# define FT_.*_H/d' | sed '/^# include */d' >> $@;)
	@echo "#endif" >> $@

dist: $(COMBINED_HEADER)
	@$(MKDIR) $(DIST_DIR)
	@$(foreach src,$(SRCS),cp $(src) $(DIST_DIR);)
	@cp -f $(PUBLIC_DIR)/Makefile $(DIST_DIR)

dist_tests: dist
	$(MAKE) $(DIST_DIR) all
	@cp -f $(PUBLIC_DIR)/my_config.sh libft-war-machine/my_config.sh
	libft-war-machine/grademe.sh
	@cp -f $(PUBLIC_DIR)/my_config.sh Libftest/my_config.sh
	Libftest/grademe.sh

dist_tests_bonus: dist
	$(MAKE) $(DIST_DIR) bonus
	@cp -f $(PUBLIC_DIR)/my_config.sh libft-war-machine/my_config.sh
	libft-war-machine/grademe.sh
	@cp -f $(PUBLIC_DIR)/my_config.sh Libftest/my_config.sh
	Libftest/grademe.sh

tests: all
	$(MAKE) $(TEST_DIR) all

docs:
	${DOXYGEN} ${DOXYGEN_CONFIG}

.PHONY: all clean fclean re norm dist dist_tests tests docs

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:02:52 by welee             #+#    #+#              #
#    Updated: 2024/04/17 09:58:09 by welee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_DIR = srcs
OBJS_DIR = objs
INCLUDES_DIR = includes
TEST_DIR = tests
DIST_DIR = dist
PUBLIC_DIR = public
BIN_DIR = bin

INCLUDES = -I ${INCLUDES_DIR}
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
MKDIR = mkdir -p

SRCS = $(shell find $(SRCS_DIR) -name '*.c')
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)
HEADERS = $(wildcard $(INCLUDES_DIR)/ft_*.h)
COMBINED_HEADER = $(DIST_DIR)/libft.h

NORM = norminette
NORM_FLAGS = -R CheckForbiddenSourceHeader -R CheckDefine

all: ${NAME}

$(NAME): $(OBJS)
	$(MKDIR) $(BIN_DIR)
	$(LIBC) $(BIN_DIR)/$(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) -r $(OBJS_DIR)
	$(RM) -r $(DIST_DIR)

fclean: clean
	$(RM) $(BIN_DIR)/$(NAME)

re: fclean all dist

norminette:
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
	@$(foreach hdr,$(HEADERS),cat $(hdr) | sed -e '1,/^#ifndef FT_.*_H/d' -e '/^#endif/d' -e '/^# define FT_.*_H/d' | sed '/^# include <stddef.h>/d' >> $@;)
	@echo "#endif" >> $@

dist: $(COMBINED_HEADER)
	$(MKDIR) $(DIST_DIR)
	find $(SRCS_DIR) -type f -exec cp {} $(DIST_DIR) \;
	cp -f $(PUBLIC_DIR)/* $(DIST_DIR)

.PHONY: all clean fclean re norminette dist

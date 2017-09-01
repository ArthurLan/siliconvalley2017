# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/25 15:28:12 by nmei              #+#    #+#              #
#    Updated: 2017/08/30 20:18:06 by nmei             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

INCLUDE = ./includes/
SRCS_DIR = ./srcs/
RM = /bin/rm

FILES = bsq_main bsq_str_realloc bsq_read_utils bsq_write_utils\
		bsq_general_utils bsq_struct_utils bsq_header_utils
CFLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRCS_DIR)%.c, $(FILES))
OFILES = $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all: $(NAME)

build_objects:
	gcc $(CFLAGS) -c -I$(INCLUDE) $(SRC)

$(OFILES):
	gcc $(CFLAGS) -c -I$(INCLUDE) $(CFILES)

$(NAME): $(OFILES)
	gcc $(CFLAGS) -o $(NAME) $(OFILES)

clean:
	$(RM) -f $(OFILES)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 07:02:51 by alanter           #+#    #+#              #
#    Updated: 2017/08/27 23:11:49 by alanter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRCS_DIR = ./srcs/
RM = /bin/rm -f

FILES = reprod_rush rush02_main fill_table utilities read_stdin analyze_input
HEAD = -I includes
FLAG = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRCS_DIR)%.c, $(FILES))
OFILES = $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OFILES)
	gcc $(FLAG) $(OFILES) -o $(NAME)

$(OFILES) :
	gcc $(FLAG) -c $(CFILES) $(HEAD)

clean :
	$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all

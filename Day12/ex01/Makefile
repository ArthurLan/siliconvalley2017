# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alanter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/24 18:07:30 by alanter           #+#    #+#              #
#    Updated: 2017/08/24 23:05:00 by alanter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/ft_display_file.c
OBJ = ft_display_file.o
HEAD = -I includes
FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAG) $(OBJ) -o $(NAME)

$(OBJ) :
	gcc $(FLAG) -c $(SRCS) $(HEAD)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/18 09:25:05 by gfestin           #+#    #+#              #
#    Updated: 2018/12/18 14:17:46 by gfestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c fillit.c tetri.c verif.c

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -L libft/ -lft

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

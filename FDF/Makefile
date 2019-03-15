# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/18 09:25:05 by gfestin           #+#    #+#              #
#    Updated: 2019/01/14 13:03:41 by gfestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = main.c window.c fdf.c map.c

all: $(NAME)

$(NAME):
	make -C libft/
	gcc -Wall -Wextra -Werror -I /usr/local/include -o $(NAME) $(SRC) \
	   	-L /usr/local/lib -lmlx -framework OpenGL -framework AppKit \
		-L libft -lft
clean:
	make -C libft/ clean

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all

debug:
	make -C libft/ re
	gcc -Wall -Wextra -Werror -I /usr/local/include -o $(NAME) $(SRC) \
		-L /usr/local/lib -lmlx -framework OpenGL -framework AppKit \
		-L libft -lft -g

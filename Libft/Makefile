#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkoo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:22:05 by pkoo              #+#    #+#              #
#    Updated: 2018/11/09 15:08:13 by pkoo             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror -c $(SRC)
		ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re: fclean all
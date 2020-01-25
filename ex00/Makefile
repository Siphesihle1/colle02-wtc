# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smthethw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 11:03:51 by smthethw          #+#    #+#              #
#    Updated: 2020/01/25 11:18:25 by smthethw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02

OUT = *.o

SRC = *.c

all : $(NAME)

$(NAME): $(OUT)
	@gcc -Wall -Werror -Wextra -o $(NAME) $(OUT)

$(OUT): $(SRC)
	@gcc -c $(SRC)

clean:
	@/bin/rm -f $(OUT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

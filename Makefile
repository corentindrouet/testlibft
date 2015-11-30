# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/30 14:31:54 by cdrouet           #+#    #+#              #
#    Updated: 2015/11/30 16:16:53 by cdrouet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC = *.c

BIN = *.o

$(NAME) : fclean
	gcc -c $(SRC) -Wall -Wextra -Werror -I../Libft ; gcc -o $(NAME) -Wall -Wextra -Werror $(BIN) -L../Libft/ -lft

all : $(NAME)

clean : 
	rm -f $(BIN)

fclean : clean
	rm -f $(NAME)

re : all

run : all
	./exec

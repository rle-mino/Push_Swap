# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/29 14:39:35 by rle-mino          #+#    #+#              #
#    Updated: 2016/03/29 18:54:27 by rle-mino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRC		=	main.c				\
			ps_parsing.c		\
			ps_error.c			\

DOTO	=	$(SRC:.c=.o)

FLAGS	= -Wall -Wextra -Werror

.PHONY: all, clean, fclean, re


$(NAME): $(DOTO)
	make -C libft
	gcc $(FLAGS) -lft -L ./libft -o $(NAME) $(DOTO) -I includes

all : $(NAME)

%.o: %.c
	gcc -c $(FLAGS) -I includes $< -o $@

clean :
	rm -rf $(DOTO)

fclean : clean
	rm -rf $(NAME)

test : $(NAME)
	./push_swap 1 2 3 4 5 6

re : fclean all $(NAME)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pben <pben@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 17:35:55 by crath             #+#    #+#              #
#    Updated: 2019/07/30 13:25:16 by pben             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.h includes libft
vpath %.c srcs libft

FLAGS = #-Wall -Wextra -Werror

NAME = push_swap

OBJ = $(notdir $(patsubst %.c,%.o,$(wildcard srcs/*.c)))

LIB_OBJ = $(notdir $(patsubst %.c,%.o,$(wildcard libft/*.c)))

all: $(NAME)

$(NAME): $(OBJ) $(LIB_OBJ)
	gcc $^ -o $@ 

%.o: %.c $(LIB)
	gcc $(FLAGS) -c -g $^ -Ilibft -Iincludes

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

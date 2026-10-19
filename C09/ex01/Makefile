# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ******** <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/16 18:26:45 by ********          #+#    #+#              #
#    Updated: 2026/08/23 20:07:39 by ********         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
HEADERS = ./includes
FLAGS = -Wall -Wextra -Werror -I $(HEADERS)
OBJECTS = ./srcs/ft_putchar.o ./srcs/ft_swap.o ./srcs/ft_putstr.o ./srcs/ft_strlen.o ./srcs/ft_strcmp.o
AR = ar rcs
LIBFT = libft.a

.SUFFIXES: .c .o

$(LIBFT): $(OBJECTS)
	$(AR) $(LIBFT) $(OBJECTS)

.c.o:
	$(CC) $(FLAGS) -c -o $@ $<

.DEFAULT: all

.PHONY: help clean fclean re all

all: $(LIBFT)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBFT)

re: fclean all

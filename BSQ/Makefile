# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ******** <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/25 13:24:17 by ********          #+#    #+#              #
#    Updated: 2026/08/26 16:28:39 by ********         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
HEADERS = ft_bsq.h
FLAGS = -Wall -Wextra -Werror -I./includes
SOURCES = main.c srcs/ft_brut_force.c srcs/ft_check_square.c \
		srcs/ft_display_solve.c srcs/ft_init_malloc.c srcs/ft_read.c \
		srcs/ft_split.c srcs/ft_utils.c
OBJECTS = $(SOURCES:.c=.o) 
NAME = bsq 

.DEFAULT: all

.PHONY: all clean fclean re help

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c -o $@ $< 

$(NAME) : $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

help:
	@echo "Available targets:"
	@echo "all        - Compile the program (default)"
	@echo "clean      - Deletes the object files"
	@echo "fclean     - Deletes everything (objects + executable)"
	@echo "re         - Deletes everything and recompiles the program"
	@echo "help       - Displays this help"

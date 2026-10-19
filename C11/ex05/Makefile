# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ******** <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/20 13:29:37 by ********          #+#    #+#              #
#    Updated: 2026/08/24 01:22:09 by ********         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
HEADERS = ft_math.h
FLAGS = -Wall -Wextra -Werror -I.
SOURCES = ft_math.c ft_tools.c do-op.c
OBJECTS = ft_math.o ft_tools.o do-op.o 
TARGET = do-op 

.DEFAULT: all

.PHONY: all clean fclean re

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c -o $@ $< 

$(TARGET) : $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

all: $(TARGET)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

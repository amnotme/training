# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/27 01:58:34 by leopoldoh         #+#    #+#              #
#    Updated: 2019/04/27 01:58:45 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CC = clang++
CCFILES = main.cpp \
		Zombie.cpp \
		ZombieEvent.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

fclean:
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re, clean, all, fclean

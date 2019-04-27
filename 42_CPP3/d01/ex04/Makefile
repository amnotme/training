# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/27 03:43:47 by leopoldoh         #+#    #+#              #
#    Updated: 2019/04/27 03:44:06 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CC = clang++
CCFILES = ex04.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

fclean:
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(NAME)

re: fclean make

.PHONY: re clean all fclean

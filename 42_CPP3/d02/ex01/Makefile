# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/02 21:48:18 by leopoldoh         #+#    #+#              #
#    Updated: 2019/05/02 21:48:21 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CC = clang++
CCFILES = Fixed.cpp \
  		main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

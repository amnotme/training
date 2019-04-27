# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/26 21:41:27 by leopoldoh         #+#    #+#              #
#    Updated: 2019/04/26 21:41:29 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Pony
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CXXFILES = main.cpp \
					Pony.cpp

all:
	$(CXX) $(CXXFLAGS) $(CXXFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re, all, fclean, clean

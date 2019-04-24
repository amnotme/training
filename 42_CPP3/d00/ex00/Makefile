# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <leo@42.us.org>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/23 02:39:01 by lhernand          #+#    #+#              #
#    Updated: 2019/04/23 02:39:04 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CXXFILES = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(CXXFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re


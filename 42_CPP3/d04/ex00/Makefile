# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 20:22:46 by leopoldoh         #+#    #+#              #
#    Updated: 2019/05/04 20:59:51 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pendatic-errors
CXXFILES = Sorcerer.cpp \
		Victim.cpp \
		Peon.cpp \
		main.cpp

CXXOBJECTS = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME):
		@$(CXX) $(CXXLAGS) $(CXXFILES) -o $(NAME) 

clean:
		@/bin/rm -f $(CXXOBJECTS)

fclean:
		@/bin/rm -f $(CXXOBJECTS) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

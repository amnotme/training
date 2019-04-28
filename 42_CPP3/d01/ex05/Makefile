# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/27 03:43:47 by leopoldoh         #+#    #+#              #
#    Updated: 2019/04/27 04:50:17 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CCXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CCXX = clang++
CCXXFILES = Brain.cpp \
		Human.cpp \
		main.cpp 

all: $(NAME)

$(NAME):
	@$(CCXX) $(CCXXFLAGS) -o $(NAME) $(CCXXFILES)

fclean:
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re clean all fclean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/27 17:31:05 by leopoldoh         #+#    #+#              #
#    Updated: 2019/05/01 22:48:36 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CCXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CCXX = clang++
CCXXFILES = replace.cpp
REMOVE = *.replace

all: $(NAME)

$(NAME):
	@$(CCXX) $(CCXXFLAGS) -o $(NAME) $(CCXXFILES)

fclean:
	/bin/rm -f $(NAME) $(REMOVE)

clean:
	/bin/rm -f $(REMOVE)

re: fclean all

.PHONY: re clean all fclean

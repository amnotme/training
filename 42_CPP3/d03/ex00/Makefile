# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/03 23:27:49 by leopoldoh         #+#    #+#              #
#    Updated: 2019/05/03 23:27:50 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
NAME = fragtrap
CXXFILES = FragTrap.cpp \
		main.cpp

all: $(NAME)

$(NAME):
	@echo "\033[1;32mCompiling"
	$(CXX) $(CXXFLAGS) -o $(NAME) $(CXXFILES)
	@echo "Done \033[0m"

clean:
	@echo "\033[1;31mCleaning"
	/bin/rm -f $(NAME)
	@echo "Done \033[0m"

fclean:
	@echo "\033[1;31mCleaning"
	/bin/rm -f $(NAME)
	@echo "Done\033[0m"

re: fclean all

.PHONY: re, clean, fclean, all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/27 17:31:05 by leopoldoh         #+#    #+#              #
#    Updated: 2019/04/27 17:31:07 by leopoldoh        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = weapon
CCXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CCXX = clang++
CCXXFILES = HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
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

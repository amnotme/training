
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
NAME = fragtrap
CXXFILES = FragTrap.cpp \
		ScavTrap.cpp \
		main.cpp \


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

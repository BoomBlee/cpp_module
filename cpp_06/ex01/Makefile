NAME = Serialization

CC = clang++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

FILE = \
function \
main

SRCS = $(addsuffix .cpp, $(FILE))

all: $(NAME)

$(NAME): function.hpp $(SRCS)
	@$(CC) -g $(FLAGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m Serialization created\033[0m"

clean:
	@rm -rf $(NAME).dSYM
	@echo "\033[1;33m clean completed\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31m fclean completed\033[0m"

re: fclean all

.PHONY: all clean fclean re

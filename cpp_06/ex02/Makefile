NAME = Identify

CC = clang++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

FILE = \
main

SRCS = $(addsuffix .cpp, $(FILE))

HEADER_FILE = \
A \
B \
C \
Base

HEADER = $(addsuffix .hpp, $(HEADER_FILE))

all: $(NAME)

$(NAME): $(HEADER) $(SRCS)
	@$(CC) -g $(FLAGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m Identify created\033[0m"

clean:
	@rm -rf $(NAME).dSYM
	@echo "\033[1;33m clean completed\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31m fclean completed\033[0m"

re: fclean all

.PHONY: all clean fclean re

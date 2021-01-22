
NAME = replace

SRCS = replace.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)
	@echo "✅ \033[1;32mreplace created\033[0m"

clean:
	@echo "❎ \033[1;33mclean completed\033[0m"
	
fclean: clean
	@rm $(NAME)
	@echo "❌ \033[1;31mfclean completed\033[0m"

re: fclean all

.PHONY: all clean fclean re
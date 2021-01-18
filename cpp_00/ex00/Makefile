# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 04:29:14 by kcaraway          #+#    #+#              #
#    Updated: 2021/01/18 05:03:51 by kcaraway         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)
	@echo "✅ \033[1;32mMegaphone created\033[0m"

clean:
	@echo "❎ \033[1;33mclean completed\033[0m"
	
fclean: clean
	@rm $(NAME)
	@echo "❌ \033[1;31mfclean completed\033[0m"

re: fclean all

.PHONY: all clean fclean re
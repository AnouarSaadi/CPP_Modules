# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 13:44:42 by asaadi            #+#    #+#              #
#    Updated: 2021/05/30 16:36:57 by asaadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS =	megaphone.cpp


all: $(NAME)

$(NAME): $(SRCS) 
	@echo "\033[0;33m"
	clang++ -Wall -Wextra -Werror $< -o $@
	@echo "\033[0m"
	@echo "\033[1;33m"
	@echo "			The binary file has been created!\n"
	@echo "\033[0m"

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

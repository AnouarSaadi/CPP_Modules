# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 18:33:40 by asaadi            #+#    #+#              #
#    Updated: 2021/07/25 18:20:49 by asaadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp
			
HDRS = ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;33m"
	@echo "			The binary file has been created!\n"
	@echo "\033[0m"

%.o: %.cpp $(HDRS)
	@echo "\033[0;33m"
	clang++ $(FLAGS) -c $< -o $@
	@echo "\033[0m"


clean:
	@rm -rf $(OBJS)
	@echo "\033[0;31m"
	@echo "			The objects files has been removed!\n"
	@echo "\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m"
	@echo "			The binary file has been removed!\n"
	@echo "\033[0m"

re: fclean all

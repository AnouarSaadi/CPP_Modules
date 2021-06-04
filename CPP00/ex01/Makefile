# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 13:44:42 by asaadi            #+#    #+#              #
#    Updated: 2021/06/01 17:50:06 by asaadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyPhoneBook

FLAGS = -Wall -Wextra -Werror

SRC_PATH = srcs

SRC_NAME = 	main.cpp \
			contact.cpp \
			my_phonebook.cpp

HDR_PATH = headers/
HDR_INC = -I ./headers
HDR_NAME = my_phonebook.hpp contact.hpp

OBJ_PATH= objs
OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJS= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
SRCS= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
HDRS= $(addprefix $(HDR_PATH)/,$(HDR_NAME))

all: $(NAME)

$(NAME): $(OBJS) 
	@g++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;33m"
	@echo "			The binary file has been created!\n"
	@echo "\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp $(HDRS)
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[0;33m"
	g++ $(FLAGS) $(HDR_INC) -c $< -o $@
	@echo "\033[0m"


clean:
	@rm -rf $(OBJS)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[0;31m"
	@echo "			The objects files has been removed!\n"
	@echo "\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m"
	@echo "			The binary file has been removed!\n"
	@echo "\033[0m"

re: fclean all

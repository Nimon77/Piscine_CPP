# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/05 18:27:54 by nsimon            #+#    #+#              #
#    Updated: 2021/02/05 18:40:55 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC_NAME = megaphone.cpp

OBJ_PATH = ./objs/

OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

CC = clang++ $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\033[34mCreation of $(NAME) ...\033[0m"
		@$(CC) $(OBJ) -o $(NAME)
		@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: %.cpp
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		@$(CC) -o $@ -c $<

clean:
		@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
		@rm -f $(OBJ)
		@rmdir $(OBJ_PATH) 2> /dev/null || true
		@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
		@echo "\033[33mRemoval of $(NAME)...\033[0m"
		@rm -f $(NAME)
		@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 15:27:20 by bhung-yi          #+#    #+#              #
#    Updated: 2023/10/17 17:34:11 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= run
SRC		= main.cpp Fixed.cpp

CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address
RM		= rm -f
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

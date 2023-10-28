# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 15:27:20 by bhung-yi          #+#    #+#              #
#    Updated: 2023/10/28 16:49:13 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		= \033[0;31m
GREEN	= \033[0;32m
WHITE	= \033[0;37m

NAME	= zoo
SRC 	= main Animal Cat Dog WrongAnimal WrongCat

CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address
RM		= rm -f

SPATH	= srcs/
SRCS	= $(addprefix $(SPATH), $(addsuffix .cpp, $(SRC)))

OPATH	= objs/
OBJS	= $(addprefix $(OPATH), $(addsuffix .o, $(SRC)))

$(OPATH)%.o: $(SPATH)%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "$(GREEN)Executable: $(NAME) is created$(WHITE)"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(addprefix $(OPATH), $(addsuffix .o, $(SRC)))
	@echo "$(RED)Object files are removed$(WHITE)"
	
fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)$(NAME) is removed$(WHITE)"

re: fclean $(NAME)

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/10/03 14:34:06 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	Span
SRC		=	main.cpp Span.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ 
	@echo "Span is complied"

obj/%.o : %.cpp  obj
	@$(CC) $(CFLAGS) -c $< -o $@

obj :
	@mkdir obj

clean :
	@rm -rf obj

fclean : clean
	@rm -f $(NAME)

re : clean all

.PHONY : all clean fclean re

# Run tests ===========================
check: ./$(NAME)
	./$(NAME) 
# Run tests ===========================
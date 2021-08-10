# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/09 11:23:32 by lryst             #+#    #+#              #
#    Updated: 2021/08/10 12:57:57 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex01

SRCS =	main.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex01 : Object files Created\033[0m"
		@echo "\033[032mex01 : ./ex01 Created\033[0m"

#diff : $(NAME) all
#@./$(NAME) | cat > mine.txt
#@diff expected.txt mine.txt

clean :
	@rm -f $(OBJS)
	@echo "\033[32mex01 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mex01 : ./ex01 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 04:24:20 by lryst             #+#    #+#              #
#    Updated: 2021/08/06 05:16:03 by lryst            ###   ########.fr        #
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
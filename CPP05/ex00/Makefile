# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 15:18:29 by lryst             #+#    #+#              #
#    Updated: 2021/07/29 15:21:08 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

SRCS =	main.cpp \
		Bureaucrat.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex00 : Object files Created\033[0m"
		@echo "\033[032mex00 : ./ex00 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mex00 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mex00 : ./ex00 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)

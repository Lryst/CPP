# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 19:26:19 by lryst             #+#    #+#              #
#    Updated: 2021/08/06 02:35:41 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

SRCS =	main.cpp \
		Convert.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mconvert : Object files Created\033[0m"
		@echo "\033[032mconvert : ./convert Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mconvert : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mconvert : ./convert Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)

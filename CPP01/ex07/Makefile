# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 18:07:55 by lryst             #+#    #+#              #
#    Updated: 2021/04/27 14:05:06 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Replace

SRCS =	main.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mReplace : Object files Created\033[0m"
		@echo "\033[032mReplace : ./Replace Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mReplace : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mReplace : ./Replace Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42f.r>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 12:09:41 by lryst             #+#    #+#              #
#    Updated: 2021/07/03 12:10:55 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex02

2NAME = 2ex02

INCLUDES = -I 

2SRCS =	my_main.cpp \
		AssaultTerminator.cpp \
		Squad.cpp \
		TacticalMarine.cpp \
		
SRCS =	main.cpp \
		AssaultTerminator.cpp \
		Squad.cpp \
		TacticalMarine.cpp \

OBJS = $(SRCS:.cpp=.o)

2OBJS = $(2SRCS:.cpp=.o)

all : $(NAME)

diff : $(NAME) all
		@./$(NAME) | cat > mine.txt
		@diff expected.txt mine.txt

mine : $(2SRCS)
		@ $(CPP) $(CFLAGS) $(2SRCS) -o $(2NAME)
		@echo "\033[032m2ex02 : Object files Created\033[0m"
		@echo "\033[032m2ex02 : ./2ex02 Created\033[0m"

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex02 : Object files Created\033[0m"
		@echo "\033[032mex02 : ./ex02 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@rm -f $(2OBJS)
	@echo "\033[32mex02/2ex02 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@rm -f $(2NAME)
	@echo "\033[32mex02/1ex02 : ./ex02 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
.SILENT : $(2OBJS)

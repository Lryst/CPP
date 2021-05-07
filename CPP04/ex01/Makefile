# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 16:03:10 by lryst             #+#    #+#              #
#    Updated: 2021/05/07 10:36:40 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex01

2NAME = 2ex01

INCLUDES = -I 

2SRCS =	my_main.cpp \
		AWeapon.cpp \
		Character.cpp \
		Enemy.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		RadScorpion.cpp \
		SuperMutant.cpp \
		
SRCS =	main.cpp \
		AWeapon.cpp \
		Character.cpp \
		Enemy.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		RadScorpion.cpp \
		SuperMutant.cpp \

OBJS = $(SRCS:.cpp=.o)

2OBJS = $(2SRCS:.cpp=.o)

all : $(NAME)

diff : $(NAME) all
		@./$(NAME) | cat > mine.txt
		@diff expected.txt mine.txt

mine : $(2SRCS)
		@ $(CPP) $(CFLAGS) $(2SRCS) -o $(2NAME)
		@echo "\033[032m2ex01 : Object files Created\033[0m"
		@echo "\033[032m2ex01 : ./2ex01 Created\033[0m"

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex01 : Object files Created\033[0m"
		@echo "\033[032mex01 : ./ex01 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@rm -f $(2OBJS)
	@echo "\033[32mex01/2ex01 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@rm -f $(2NAME)
	@echo "\033[32mex01/1ex01 : ./ex01 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
.SILENT : $(2OBJS)

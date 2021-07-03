# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 12:14:29 by lryst             #+#    #+#              #
#    Updated: 2021/07/03 19:20:59 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

2NAME = 2ex03

INCLUDES = -I 

2SRCS =	my_main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		
SRCS =	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \

OBJS = $(SRCS:.cpp=.o)

2OBJS = $(2SRCS:.cpp=.o)

all : $(NAME)

diff : $(NAME) all
		@./$(NAME) | cat > mine.txt
		@diff expected.txt mine.txt

mine : $(2SRCS)
		@ $(CPP) $(CFLAGS) $(2SRCS) -o $(2NAME)
		@echo "\033[032m2ex03 : Object files Created\033[0m"
		@echo "\033[032m2ex03 : ./2ex03 Created\033[0m"

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex03 : Object files Created\033[0m"
		@echo "\033[032mex03 : ./ex03 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@rm -f $(2OBJS)
	@echo "\033[32mex03/2ex03 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@rm -f $(2NAME)
	@rm -rf mine.txt
	@echo "\033[32mex03/1ex03 : ./ex03 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
.SILENT : $(2OBJS)

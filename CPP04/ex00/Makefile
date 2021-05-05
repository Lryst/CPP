# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 11:31:26 by lryst             #+#    #+#              #
#    Updated: 2021/05/05 15:11:10 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#clang++ -Wall -Wextra -Werror -std=c++98 *.cpp ; ./a.out | cat > mine.txt; diff expected.txt mine.txt

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

2NAME = 2ex00

INCLUDES = -I 

2SRCS =	my_main.cpp \
		Fairy.cpp \
		Peon.cpp \
		Victim.cpp \
		Sorcerer.cpp \
		
SRCS =	main.cpp \
		Fairy.cpp \
		Peon.cpp \
		Victim.cpp \
		Sorcerer.cpp \

OBJS = $(SRCS:.cpp=.o)

2OBJS = $(2SRCS:.cpp=.o)

all : $(NAME)

diff : $(NAME) all
		@./$(NAME) | cat > mine.txt
		@diff expected.txt mine.txt

mine : $(2SRCS)
		@ $(CPP) $(CFLAGS) $(2SRCS) -o $(2NAME)
		@echo "\033[032mex00 : Object files Created\033[0m"
		@echo "\033[032mex00 : ./ex00 Created\033[0m"

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex00 : Object files Created\033[0m"
		@echo "\033[032mex00 : ./ex00 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@rm -f $(2OBJS)
	@echo "\033[32mex00 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@rm -f $(2NAME)
	@echo "\033[32mex00 : ./ex00 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
.SILENT : $(2OBJS)

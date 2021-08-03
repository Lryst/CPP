# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 15:18:29 by lryst             #+#    #+#              #
#    Updated: 2021/08/03 15:24:13 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex03 : Object files Created\033[0m"
		@echo "\033[032mex03 : ./ex03 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@rm -rf *_shrubbery
	@echo "\033[32mex03 : Object files and *__shrubbery Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@rm -rf *_shrubbery
	@echo "\033[32mex03 : ./ex03 and *__shrubbery Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)

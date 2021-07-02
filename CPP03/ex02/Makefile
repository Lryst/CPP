CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex02

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mex02 : Object files Created\033[0m"
		@echo "\033[032mex02 : ./ex02 Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mex02 : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mex02 : ./ex02 Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)

CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

#HEADERS = megaphone.h

#INCLUDES = -I 

SRCS =	megaphone.cpp \

#OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mmegaphone : Object files Created\033[0m"
		@echo "\033[032mmegaphone : ./megaphone Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mmegaphone : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mmegaphone : ./megaphone Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
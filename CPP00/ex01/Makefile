CPP = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

SRCS =	main.cpp \
		contact.cpp \
		PhoneBook.cpp \

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		@ $(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[032mPhoneBook : Object files Created\033[0m"
		@echo "\033[032mPhoneBook : ./PhoneBook Created\033[0m"

clean :
	@rm -f $(OBJS)
	@echo "\033[32mPhoneBook : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[32mPhoneBook : ./PhoneBook Removed\033[0m"

up : all clean

re : fclean all

.PHONY : all clean fclean re up
.SILENT : $(OBJS)
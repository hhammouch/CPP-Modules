NAME= phonbook
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp contact.cpp phonebook.cpp


all: $(NAME)

$(NAME): $(SRC)
		c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
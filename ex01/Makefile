NAME = iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

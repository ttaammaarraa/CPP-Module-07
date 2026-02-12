NAME := ex00
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRC := main.cpp
INC := whatever.hpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

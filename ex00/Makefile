C++ = c++ -Wall -Wextra -Werror

SRC = main.cpp  ClapTrap.cpp

NAME = program

OBJ = $(SRC:.cpp=.o)

ALL: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp
	$(C++) $(OBJ) -o $(NAME)

%.o:%.cpp ClapTrap.hpp
	$(C++) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = Unnecessary_violence

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re

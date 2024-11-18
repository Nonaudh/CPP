CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = Sed_is_for_losers

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

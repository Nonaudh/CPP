CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDE = -Iinc

SRC = main.cpp Bureaucrat.cpp

DBUILD = build/

OBJ = $(addprefix $(DBUILD), $(SRC:%.cpp=%.o))

NAME = Bureaucrat

$(DBUILD)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(DBUILD)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re

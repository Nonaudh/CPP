CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -Wshadow

INCLUDE = -IClapTrap -IScavTrap -IFragTrap -IDiamondTrap 

SRC = main.cpp ClapTrap/ClapTrap.cpp ClapTrap/ClapTrapFunct.cpp FragTrap/FragTrap.cpp \
FragTrap/FragTrapFunct.cpp ScavTrap/ScavTrap.cpp ScavTrap/ScavTrapFunct.cpp \
DiamondTrap/DiamondTrap.cpp DiamondTrap/DiamondTrapFunct.cpp

DBUILD = build/

OBJ = $(addprefix $(DBUILD), $(SRC:%.cpp=%.o))

NAME = Diamond_Trap

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

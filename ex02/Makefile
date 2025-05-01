NAME = fragTrap


CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADERS = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
SRCS = FragTrap.cpp ClapTrap.cpp ScavTrap.cpp main.cpp


OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		$(CPP) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re : fclean all
NAME	 = poly
SRCS	 = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS	 = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
CFLAGS	 = -Wall -Wextra -Werror -std=c++98
CC		 = c++
OBJS	 = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

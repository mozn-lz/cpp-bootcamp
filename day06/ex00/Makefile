NAME = convert
COMP = clang++
FLAGS = -Wall -Werror -Wextra
FILES = main.cpp Id_number.cpp

all: $(NAME)

$(NAME):
	$(COMP) $(FLAGS) $(FILES) -o $(NAME)

clean:
	@rm -rf *.gch

fclean: clean
	@rm $(NAME)

re: fclean re
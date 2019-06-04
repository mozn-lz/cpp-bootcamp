NAME = PHONEbOOK
FLAGS = -Wall -Werror -Wextra
COMP = clang++ $(FLAGS)
FILES = phonebook.class.cpp phonebook.cpp

all: $(NAME)

$(NAME):
	$(COMP) $(FILES) -o $(NAME)

clean:
	@rm -rf *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all

NAME = megaphone
COMP = clang++
FLAG = -Wall -Wextra -Werror
FILES = megaphone.cpp

all: $(NAME)
$(NAME):
	@$(COMP) $(FLAG) $(FILES) -o $(NAME)

clean:
	@rm *.gch

fclean: 
	@rm -rf $(NAME)

re: fclean all

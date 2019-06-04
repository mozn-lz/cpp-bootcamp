#include <iostream>
#include <string>
#include <cctype>
#include "phonebook.class.hpp"

int	main(void)
{
	phonebook	ph[8];
	int		i;
	std::string	choice;

	i = -1;
	while(1)
	{
		std::cout << "Enter 'add', 'search' or 'exit'\n";
		std::getline(std::cin, choice);
		for (int a = 0; choice[a]; a++){
			choice[a] = toupper(choice[a]);
		}
		if (choice ==  "ADD") {
			if (i < 7) {
				/* code */
				ph[++i].add();
			} else{
				/* code */
				std::cout << "Phonebook full\n";
			}
		} else if (choice == "SEARCH") {
			if (i > -1)
			{
				for (int j = 0; j <= i; j++)
				{
					std::cout << j + 1 << "|";
					ph[j].search();
					std::cout << "\n";
				}
			} else{
				std::cout << "No contacts found\n";
			}
		} else if (choice ==  "EXIT") {
			return (0);
		} else
			std::cout << "Invalid comand\n";
	}
	return (0);
}

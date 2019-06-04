#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(){
	std::cout << "\nWhat is your pony's name? ";
	std::getline(std::cin, this->name);
	std::cout << "\nWhat does your pony eat? ";
	std::getline(std::cin, this->eat);
	std::cout << "\nWhat does your pony drink? ";
	std::getline(std::cin, this->drink);
	std::cout << "\nWhat time does your pony sleep? ";
	std::getline(std::cin, this->sleep);
	std::cout << "\nhow fast does it run:  ";
	std::getline(std::cin, this->run);
	std::cout << "\n";
}

Pony::~Pony(){
	std::cout << this->name << " ate "<< this->eat <<", drank " << this->drink <<" .\nIt lived a short but happy life, but it ran too " << this->run << " and now its dead\n";
//	pn();
}

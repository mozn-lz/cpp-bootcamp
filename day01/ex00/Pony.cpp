#include "Pony.hpp"

void Pony::born(std::string name){
	name = this->_name;
	std::cout << _name << " is born.\n";
}

void Pony::eat(std::string name){
	name = this->_name;
	std::cout << this->_name << " eats way too much" << _eat  << "\n";
}

void Pony::drink(std::string name){
	name = this->_name;
	std::cout << this->_name << " drinks too little " << _drink << "\n";
}



Pony::Pony(std::string name){
	name = this->_name;
	std::cout << "\nWhat does your pony eat? ";
	std::getline(std::cin, this->_eat);
	std::cout << "\nWhat does your pony drink? ";
	std::getline(std::cin, this->_drink);	
	std::cout << "\n";
}

Pony::~Pony(){
	std::cout << "Your Pony ate "<< this->_eat <<", drank " << this->_drink
			<<" .\nIt lived a short but happy life and now its dead\n";
}

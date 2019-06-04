#include "phonebook.class.hpp"
#include <iomanip>

phonebook::phonebook(void){
}

void	phonebook::add(void){
	std::cout << "First name: ";
	std::getline(std::cin, this->_f_name);
	std::cout << "last name: ";
	std::getline(std::cin, this->_l_name);
	std::cout << "nickname: ";
	std::getline(std::cin, this->_n_name);
	std::cout << "login: ";
	std::getline(std::cin, this->_login);
	std::cout << "postal address: ";
	std::getline(std::cin, this->_post);
	std::cout << "email address: ";
	std::getline(std::cin, this->_email);
	std::cout << "phone number: ";
	std::getline(std::cin, this->_phone);
	std::cout << "birthday date: ";
	std::getline(std::cin, this->_birthday);
	std::cout << "favorite meal: ";
	std::getline(std::cin, this->_meal);
	std::cout << "underwear color: ";
	std::getline(std::cin, this->_underwear);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->_secret);
}

	// display_ten(f_name);
	// display_ten(l_name);
	// display_ten(n_name);

void	phonebook::search(void) {
	if (this->_f_name.size() > 10) {
		this->_f_name.replace(9, this->_f_name.size(), ".");
		std::cout << this->_f_name;
	}
	
	if (this->_l_name.size() > 10) {
		this->_l_name.replace(9, this->_l_name.size(), ".");
		std::cout << this->_l_name;
	}
	
	if (this->_n_name.size() > 10) {
		this->_n_name.replace(9, this->_n_name.size(), ".");
		std::cout << this->_n_name;
	}
}

phonebook::~phonebook(void){
}

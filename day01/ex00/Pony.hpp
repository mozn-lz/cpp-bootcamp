#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony{
	public:
		void born(std::string name);
		void eat(std::string name);
		void drink(std::string name);
		Pony(std::string name);
		~Pony();

	private:
		std::string _name;
		std::string _eat;
		std::string _drink;
};

#endif

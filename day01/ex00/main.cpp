#include <string>
#include "Pony.hpp"


void ponyOnTheHeap(){
	std::string name;
	std::cout << "\nWhat is your HEAP pony's name? ";
	std::getline(std::cin, name);
	Pony* pn = new Pony(name);
	delete pn;
}

void ponyOnTheStack(){
	std::string name;
	std::cout << "\nWhat is your STACK pony's name? ";
	std::getline(std::cin, name);
	Pony pn = Pony(name);
	return;
}

int main(void){
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

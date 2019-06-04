#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <cctype>
#include <string>

class phonebook {
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _n_name;
		std::string _login;
		std::string _post;
		std::string _email;
		std::string _phone;
		std::string _birthday;
		std::string _meal;
		std::string _underwear;
		std::string _secret;
	public:
		phonebook();
		void add(void);
		void search(void);
		~phonebook();
};

#endif

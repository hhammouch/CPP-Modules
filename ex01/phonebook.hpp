#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactsNbr;

	public:
		PhoneBook();
		void AddInput(void);
		void searchInput(void);

};

#endif
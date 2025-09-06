#include "phonebook.hpp"
#include <iomanip>


PhoneBook::PhoneBook()
{
    contactsNbr = 0;
}

void PhoneBook::AddInput(void)
{
	Contact newContact;
	std::string input;

		do {
			std::cout << "First Name: ";
			if (!std::getline(std::cin, input))
				return;
		} while (input.empty());
		newContact.setFirstName(input);
		
		do {
			std::cout << "Last Name: ";
			if (!std::getline(std::cin, input))
				return;
		} while (input.empty());
		newContact.setLastName(input);
		
		do {
			std::cout << "Nick Name: ";
			if (!std::getline(std::cin, input))
				return;
		} while (input.empty());
		newContact.setNickname(input);
		
		do {
			std::cout << "Phone Number: ";
			if (!std::getline(std::cin, input))
				return;
		} while (input.empty());
		newContact.setPhoneNumber(input);
		
		do {
			std::cout << "Darkest Secret: ";
			if (!std::getline(std::cin, input))
				return;
		} while (input.empty());
		newContact.setDarkestSecret(input);

		int i = contactsNbr % 8;
		contacts[i] = newContact;
		contactsNbr++;
		
		std::cout << "Contact added successfully!" << std::endl;
}

static std::string formatField(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::searchInput()
{
	int	total;

	if (contactsNbr < 8)
		total = contactsNbr;
	else
		total = 8;

	if (total == 0)
	{
		std::cout << "No contacts available!" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < total; i++)
    {
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getNickname()) << "|" << std::endl;
    }

	std::string input;
	int index = -1;
	
	do {
		std::cout << "Enter index to view full contact (0-" << (total - 1) << "): ";
		if (!std::getline(std::cin, input))
			return;

		if (input.length() == 1 && std::isdigit(input[0]))
		{
			index = input[0] - '0';
			if (index >= 0 && index < total)
				break;
			else
				std::cout << "Index out of range. Please enter a number between 0 and " << (total - 1) << "." << std::endl;
		}
		else
			std::cout << "Invalid input. Please enter a single digit." << std::endl;
	} while (true);

	Contact c = contacts[index];
	std::cout << "First Name: " << c.getFirstName() << std::endl;
	std::cout << "Last Name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickname() << std::endl;
	std::cout << "Phone Number: " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
}

#include "contact.hpp"
#include "phonebook.hpp"

void PrintUsag(void)
{
	std::cout << "\n🛠 Available commands:" << std::endl;
	std::cout << "  ⏺ ADD    - Add a new contact" << std::endl;
	std::cout << "  ⏺ SEARCH - Display and search contacts" << std::endl;
	std::cout << "  ⏺ EXIT   - Quit the program" << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	PhoneBook phoneBook;
	std::string str;
	
	std::cout << "🗂  Welcome to PhoneBook! 🗂" << std::endl;
	PrintUsag();
	while(1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << "\nByye („• ֊ •„)੭" << std::endl;
			break;
		}
		if (str == "ADD")
			phoneBook.AddInput();
		else if (str == "SEARCH")
			phoneBook.searchInput();
		else if (str == "EXIT")
		{
			std::cout << "\nByye („• ֊ •„)੭" << std::endl;
			break;
		}
		else
			PrintUsag();
	}
	return 0;
}

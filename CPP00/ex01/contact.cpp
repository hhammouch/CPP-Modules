#include "contact.hpp"

void Contact::setFirstName(const std::string &value)
{
    FirstName = value;
}

void Contact::setLastName(const std::string &value)
{
    LastName = value;
}

void Contact::setNickname(const std::string &value)
{
    Nickname = value;
}

void Contact::setPhoneNumber(const std::string &value)
{
    PhoneNumber = value;
}

void Contact::setDarkestSecret(const std::string &value)
{
    DarkestSecret = value;
}

std::string Contact::getFirstName() const
{
    return (FirstName);
}

std::string Contact::getLastName() const
{
    return (LastName);
}

std::string Contact::getNickname() const
{
    return (Nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (DarkestSecret);
}

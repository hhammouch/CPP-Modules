#include "contact.hpp"

void Contact::setFirstName(const std::string &value)
{
    this->FirstName = value;
}

void Contact::setLastName(const std::string &value)
{
    this->LastName = value;
}

void Contact::setNickname(const std::string &value)
{
    this->Nickname = value;
}

void Contact::setPhoneNumber(const std::string &value)
{
    this->PhoneNumber = value;
}

void Contact::setDarkestSecret(const std::string &value)
{
    this->DarkestSecret = value;
}

std::string Contact::getFirstName() const
{
    return (this->FirstName);
}

std::string Contact::getLastName() const
{
    return (this->LastName);
}

std::string Contact::getNickname() const
{
    return (this->Nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (this->PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (this->DarkestSecret);
}

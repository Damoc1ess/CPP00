#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){
    
}

void Contact::setContact()
{
    std::cout << "First name: ";
    std::getline(std::cin, this->firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, this->lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, this->phoneNumber);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, this->darkestSecret);
}

void Contact::printContact() const{
    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

void Contact::printContactShort(int index) const{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (this->firstName.length() > 10 ? this->firstName.substr(0, 9) + "." : this->firstName) << "|";   
    std::cout << std::setw(10) << (this->lastName.length() > 10 ? this->lastName.substr(0, 9) + "." : this->lastName) << "|";
    std::cout << std::setw(10) << (this->nickname.length() > 10 ? this->nickname.substr(0, 9) + "." : this->nickname) << "|" << std::endl;
}
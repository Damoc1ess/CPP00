#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : index(0), totalContacts(0) {}

void PhoneBook::addContact()
{
    if (totalContacts < 8)
        totalContacts++;
    contacts[index].setContact();
    index = (index + 1) % 8;
}

void PhoneBook::displayContacts() const
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; i < totalContacts; i++)
        contacts[i].printContactShort(i);
}

void PhoneBook::searchContact() const {
    if (totalContacts == 0) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    displayContacts();
    std::cout << "Enter index of contact to display: ";
    int i;
    std::cin >> i;
    std::cin.ignore();
    if (std::cin.fail() || i < 0 || i >= totalContacts) {
        std::cin.clear();
        std::cout << "Invalid index!" << std::endl;
    } else {
        contacts[i].printContact();
    }
   
}
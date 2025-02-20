#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int index;
        int totalContacts;

    public:
    PhoneBook();
    void addContact();
    void displayContacts() const;
    void searchContact() const;
};

#endif
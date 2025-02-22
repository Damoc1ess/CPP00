#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void display_prompt(){
    std::cout << "===== PHONEBOOK MENU =====" << std::endl;
    std::cout << "1. ADD - Add a new contact" << std::endl;
    std::cout << "2. SEARCH - Search for a contact" << std::endl;
    std::cout << "3. EXIT - Exit the program" << std::endl;
    std::cout << "==========================" << std::endl;
}

int main(void){
    PhoneBook phonebook;
    std::string command;

    while (true) {
        display_prompt();
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, command)) {
            if (std::cin.eof()) {
                std::cout << "\nExiting program..." << std::endl;
                break;
            }
            std::cin.clear();
            std::cout << "Error reading input. Please try again." << std::endl;
            continue;
        }

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }

    return 0;
}
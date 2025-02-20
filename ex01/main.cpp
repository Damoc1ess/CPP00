#include "PhoneBook.hpp"
#include <iostream>

// Fonction de test
void runTests() {
    PhoneBook phoneBook;
    
    std::cout << "\n===== Test: Ajout de 3 contacts =====\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Ajout du contact " << i + 1 << std::endl;
        phoneBook.addContact();
    }

    std::cout << "\n===== Test: Affichage des contacts =====\n";
    phoneBook.displayContacts();

    std::cout << "\n===== Test: Recherche d'un contact (index 1) =====\n";
    phoneBook.searchContact();

    std::cout << "\n===== Test: Ajout de 8 contacts et dépassement =====\n";
    for (int i = 0; i < 8; i++) {
        std::cout << "Ajout du contact " << i + 1 << std::endl;
        phoneBook.addContact();
    }

    std::cout << "\n===== Test: Vérification du remplacement du plus ancien =====\n";
    phoneBook.displayContacts();

    std::cout << "\n===== Test: Recherche avec un index invalide (-1) =====\n";
    std::cin.clear();  // Nettoie l'entrée pour éviter les erreurs précédentes
    std::cin.ignore();
    phoneBook.searchContact();

    std::cout << "\n===== Test: Fin des tests =====\n";
}

int main() {
    std::cout << "===== DÉBUT DES TESTS =====" << std::endl;
    runTests();
    std::cout << "===== TESTS TERMINÉS =====" << std::endl;
    return 0;
}

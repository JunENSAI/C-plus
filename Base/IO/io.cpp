#include <iostream>
#include <string>

int main() {
    int ageUtilisateur;
    std::string nomUtilisateur;

    // Demander le nom de l'utilisateur
    std::cout << "Entrez votre nom : ";
    // std::getline est préférable pour lire des lignes entières (avec espaces) pour les std::string
    std::getline(std::cin, nomUtilisateur);

    // Demander l'âge de l'utilisateur
    std::cout << "Entrez votre age : ";
    std::cin >> ageUtilisateur; // ">>" est l'opérateur d'extraction

    // Afficher les informations
    std::cout << "Bonjour, " << nomUtilisateur << " !" << std::endl;
    std::cout << "Vous avez " << ageUtilisateur << " ans." << std::endl;

    // Problème potentiel : std::cin laisse un '\n' dans le buffer après avoir lu un nombre.
    // Si vous devez lire une autre ligne avec std::getline après un std::cin >> nombre,
    // vous devrez vider le buffer. Une façon simple :
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Nécessite #include <limits>

    return 0;
}
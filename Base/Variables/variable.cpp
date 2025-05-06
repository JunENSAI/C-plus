#include <iostream>
#include <string>

int main() {
    // Déclaration et initialisation des variables
    int age = 24;
    double prix = 19.99;
    char initiale = 'R';
    bool estEtudiant = true;
    std::string nom = "Junior";

    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << " ans" << std::endl;
    std::cout << "Initiale : " << initiale << std::endl;
    std::cout << "Prix du produit : " << prix << " euros" << std::endl;
    std::cout << "Est étudiant(e) ? : " << estEtudiant << std::endl;

    // Modification de la valeur d'une variable
    age = 17;
    std::cout << "Nouvel age : " << age << std::endl;

    return 0;
}
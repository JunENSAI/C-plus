#include <iostream>
#include <string>

// Fonction qui prend un nom (string) et un âge (int) en paramètres
void presenterPersonne(std::string nom, int age) {
    std::cout << "Je m'appelle " << nom << "." << std::endl;
    std::cout << "J'ai " << age << " ans." << std::endl;
}

int main() {
    presenterPersonne("JunENSAI", 24); // Appel avec des valeurs littérales
    std::cout << "----------------------" << std::endl;

    std::string prenom = "Martin";
    int sonAge = 25;
    presenterPersonne(prenom, sonAge); // Appel avec des variables

    return 0;
}
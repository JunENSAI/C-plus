#include <iostream>

int main() {
    int nombre;
    do {
        std::cout << "Entrez un nombre positif : ";
        std::cin >> nombre;
    } while (nombre <= 0); // La boucle continue tant que le nombre n'est pas positif

    std::cout << "Vous avez entré : " << nombre << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int compteur = 0;
    std::cout << "Boucle while :" << std::endl;
    while (compteur < 10) {
        std::cout << "Compteur = " << compteur << std::endl;
        compteur++; // Incrémentation du compteur
    }
    return 0;
}
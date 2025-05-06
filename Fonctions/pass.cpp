#include <iostream>

void modifierValeur(int valeurCopiee) {
    valeurCopiee = 100; // Modifie la copie locale
    std::cout << "Dans la fonction, valeurCopiee = " << valeurCopiee << std::endl;
}

int main() {
    int monNombre = 10;
    std::cout << "Avant l'appel de la fonction, monNombre = " << monNombre << std::endl;

    modifierValeur(monNombre);

    std::cout << "Après l'appel de la fonction, monNombre = " << monNombre << std::endl; // Reste 10

    return 0;
}
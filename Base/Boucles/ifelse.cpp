#include <iostream>

int main() {
    double note;
    std::cout << "Entrez une moyenne (sur 20) : ";
    std::cin >> note;

    if (note >= 10.0) {
        std::cout << "Félicitations, vous avez réussi !" << std::endl;
        if (note >= 16.0) {
            std::cout << "Mention Très Bien !" << std::endl;
        } else if (note >= 14.0) {
            std::cout << "Mention Bien." << std::endl;
        } else if (note >= 12.0) {
            std::cout << "Mention Assez Bien." << std::endl;
        }
    } else if (note >= 8.0) {
        std::cout << "Vous devez aller au rattrapage." << std::endl;
    } else {
        std::cout << "Désolé, vous avez échoué." << std::endl;
    }

    return 0;
}
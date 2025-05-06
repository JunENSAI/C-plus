#include <iostream>

int main() {
    std::cout << "Comptons jusqu'à 10 :" << std::endl;
    // for (initialisation; condition; incrémentation)
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Nouvelle ligne à la fin

    return 0;
}
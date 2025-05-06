#include <iostream>

int main() {
    int a = 10, b = 3;
    double c = 10.0, d = 3.0;

    // Arithmétique
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;
    std::cout << "c / d = " << (c / d) << std::endl;
    std::cout << "a % b = " << (a % b) << std::endl;

    // Comparaison
    int x = 5, y = 5;
    std::cout << "x == y ? " << (x == y) << std::endl;
    std::cout << "x != b ? " << (x != b) << std::endl;
    std::cout << "x > b ? " << (x > b) << std::endl;

    // Logique
    bool p = true, q = false;
    std::cout << "p && q : " << (p && q) << std::endl;
    std::cout << "p || q : " << (p || q) << std::endl;
    std::cout << "!p : " << (!p) << std::endl;

    return 0;
}
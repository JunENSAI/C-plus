#include <iostream>

// Fonction qui additionne deux entiers et retourne leur somme
int addition(int a, int b) {
    int somme = a + b;
    return somme;
}

// Fonction qui calcule la moyenne de deux nombres décimaux
double moyenne(double x, double y) {
    return (x + y) / 2.0;
}

int main() {
    int num1 = 17, num2 = 13;
    int resultatAddition = addition(num1, num2);
    std::cout << num1 << " + " << num2 << " = " << resultatAddition << std::endl;

    double val1 = 17.5, val2 = 12.5;
    double resultatMoyenne = moyenne(val1, val2);
    std::cout << "La moyenne de " << val1 << " et " << val2 << " est " << resultatMoyenne << std::endl;

    // Appel direct dans un cout
    std::cout << "moyenne(16.75, 7.25) = " << moyenne(16.75, 7.25) << std::endl;

    return 0;
}
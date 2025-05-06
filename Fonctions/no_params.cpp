#include <iostream>
#include <cstdlib> // Pour rand() et srand()
#include <ctime>   // Pour time()

// Fonction qui retourne un nombre aléatoire entre 1 et 6 (simulation d'un dé)
int lancerDe() {
    // Initialiser le générateur de nombres aléatoires une seule fois (typiquement dans main)
    // mais pour cet exemple simple, on peut le laisser ici. Pour de meilleurs résultats,
    // srand() devrait être appelé une seule fois au début du programme.
    // static bool seeded = false;
    // if (!seeded) {
    //     srand(time(0));
    //     seeded = true;
    // }
    int resultat = (rand() % 6) + 1; // Génère un nombre entre 0 et 5, puis ajoute 1
    return resultat; // Retourne la valeur calculée
}

int main() {
    // Initialisation du générateur de nombres aléatoires (meilleur endroit)
    srand(time(0));

    int resultatDe1 = lancerDe();
    std::cout << "Premier lancer : " << resultatDe1 << std::endl;

    int resultatDe2 = lancerDe();
    std::cout << "Deuxième lancer : " << resultatDe2 << std::endl;

    // On peut aussi utiliser le retour d'une fonction directement dans une expression
    std::cout << "Troisième lancer : " << lancerDe() << std::endl;

    return 0;
}
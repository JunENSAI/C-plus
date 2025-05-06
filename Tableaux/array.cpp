#include <iostream>

void multiplier(){

    int b[9]={1,2,3,4,5,6,7,8,9};

    for (int i = 1; i <= 10; ++i) {
        for(int j : b){
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
        std::cout << "-----------" << std::endl; 
    }

}


int main() {
    // Déclare un tableau nommé 'notes' pouvant contenir 5 entiers.
    int notes[5];

    notes[0] = 15; // Assigne la valeur 15 au premier élément (indice 0)
    notes[1] = 12;
    // notes[5] = 10; // ERREUR ! Dépassement de tableau (l'indice 5 est hors limites)

    std::cout << "Premiere note : " << notes[0] << std::endl;
    std::cout << "Deuxieme note : " << notes[1] << std::endl;

    // initialisation d'un tableau

    // Méthode 1: Initialisation complète
    // Le compilateur déduit la taille (5) d'après le nombre d'initialiseurs.
    int scores[] = {10, 20, 30, 40, 50};
    // est équivalent à : int scores[5] = {10, 20, 30, 40, 50};

    std::cout << "Score 1: " << scores[0] << std::endl; // Affiche 10
    std::cout << "Score 3: " << scores[2] << std::endl; // Affiche 30

    // Méthode 2: Initialisation partielle (taille spécifiée)
    // Les éléments non initialisés explicitement sont mis à zéro (pour les types numériques).
    double temperatures[5] = {12.5, 15.0, 10.2};

    std::cout << "Temperature 1: " << temperatures[0] << std::endl;
    std::cout << "Temperature 4: " << temperatures[3] << std::endl; // Affiche 0.0

    // Afficher tous les éléments du tableau
    std::cout << "Elements du tableau : ";
    for (int i = 0; i < 5; ++i) { // i va de 0 à TAILLE-1
        std::cout << temperatures[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "------------TABLE DE MULTIPLICATION-----------" << std::endl;

    multiplier();

    return 0;

}
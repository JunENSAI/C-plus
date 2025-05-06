// Mon premier programme C++

#include <iostream> // C'est une directive de préprocesseur qui inclut la bibliothèque iostream.
                  // iostream est nécessaire pour utiliser cout (pour l'affichage).

// La fonction main() est le point d'entrée de tout programme C++.
int main() {
    // std::cout est utilisé pour afficher du texte à l'écran.
    // "std::" indique que cout fait partie de l'espace de noms (namespace) standard.
    // "<<" est l'opérateur d'insertion, il envoie la chaîne de caractères à cout.
    // std::endl insère une nouvelle ligne et vide le tampon de sortie.
    std::cout << "Hello World!" << std::endl;

    // La fonction main retourne un entier.
    // Retourner 0 indique que le programme s'est terminé avec succès.
    return 0;
}
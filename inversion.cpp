#include <stdio.h>

void inverse(char *chaine) {
    int debut = 0; // Initialiser le début de la chaîne
    int fin = 0; // Initialiser la fin de la chaîne

    // Trouver la longueur de la chaîne pour déterminer la fin
    while (chaine[fin] != '\0') {
        fin++;
    }
    fin--; // Se positionner sur le dernier caractère

    // Inverser les caractères en échangeant ceux des extrémités
    while (debut < fin) {
        char temp = chaine[debut]; // Stocker temporairement le caractère de début
        chaine[debut] = chaine[fin]; // Placer le caractère de fin au début
        chaine[fin] = temp; // Placer le caractère de début à la fin
        debut++; // Avancer vers le centre
        fin--; // Reculer vers le centre
    }
}

int main() {
    char texte[] = "Inversion"; // Chaîne à inverser
    inverse(texte); // Appeler la fonction d'inversion
    printf("Chaîne inversée : %s\n", texte); // Afficher la chaîne inversée
    return 0;
}
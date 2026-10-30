// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
float nombre_1;
float nombre_2;
float resultat;
char operateur;

// Boucle principale
int main(){
    // Saisis de l'opérateur
    printf("Saisir l'opérateur ('+' ou '*')\n");
    scanf("%c", &operateur);
    // Saisis du premier nombre
    printf("Saisir le premier nombre\n");
    scanf("%f", &nombre_1);
    // Saisis du deuxième nombre
    printf("Saisir le deuxième nombre\n");
    scanf("%f", &nombre_2);
    // Conditions
    switch (operateur) {
        case '+':
            // Calcul de l'addition
            resultat = nombre_1 + nombre_2;
            // Affichage du résultat
            printf("Le résultat est %f\n", resultat);
            break;
        case '*':
            // Calcul de la multiplication
            resultat = nombre_1 * nombre_2;
            // Affiche du résultat
            printf("Le résultat est %f\n", resultat);
            break;
        default:
            printf("erreur");
            break;
    }
    return 0;
}
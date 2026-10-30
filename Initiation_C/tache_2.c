// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
float diametre; // Diamètre du disque
float surface; // Surface du disque
const float PI = 3.141593;

// Boucle principale
int main(){
    // Saisir le diamètre du disque
    printf("Saisir le diamètre du disque\n");
    scanf("%f", &diametre);
    // Calcul de la surface du disque
    surface = PI * (diametre/2) * (diametre/2);
    // Afficher la surface du disque
    printf("La surface du disque est de %f\n", surface);
    return 0;
}
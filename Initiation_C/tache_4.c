// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
int x;
int y;
int image;

// Déclaration de la fonction f(x)
int f(int x){
    y = 4*x*x*x + 5*x + 8;
    return y;
}

// Boucle principale
int main(){
    // Saisis de la valeur x
    printf("Saisir une valeur pour x\n");
    scanf("%d", &x);
    // Calcul de f(x)
    image = f(x);
    // Affichage du résultat
    printf("L'image de la fonction est f(%d) = %d\n", x, image);
    return 0;
}
// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
float nombre_1;
float nombre_2;

// Boucle principale
int main(){
    // Saisir le premier nombre
    printf("Saisir le premier nombre\n");
    scanf("%f", &nombre_1);
    // Saisir le deuxième nombre
    printf("Saisir le deuxième nombre\n");
    scanf("%f", &nombre_2);
    // Détermination du signe
    if ((nombre_1<0 && nombre_2>=0)||(nombre_1>=0 && nombre_2<0)){
        // Si l'un des deux nombres est négatif, le produit est négatif
        printf("Le produit des deux nombres est négatif.\n");
    }
    else{
        // Sinon le produit est négatif
        printf("Le produit des deux nombres est positif.\n");
    }
    return 0;
}
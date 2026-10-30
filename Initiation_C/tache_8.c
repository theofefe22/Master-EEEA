// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
int n;
long long int somme;

// Boucle principale
int main(){
    // Saisis de l'entier n naturel
    do{
        printf("Saisir un entier naturel n\n");
        scanf("%d", &n);
    } while (n<0);
    // Calcul de la somme
    for (int p = 1 ; p <= n ; ++p)
    {
        somme = somme + (p * p);
    }
    // Affichage de la somme
    printf("La somme de p = 1 jusqu'à %d vaut : S = %lld\n", n, somme);
    return 0;
}
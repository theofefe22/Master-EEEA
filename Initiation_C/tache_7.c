// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
int n;
int p = 0;
long long int n_factoriel = 1;
long long int p_factoriel = 1;

// Boucle principale
int main(){
    // Saisis de l'entier n
    do
    {
        printf("Saisir un entier n, tel que n compris entre 1 et 20 inclus\n");
        scanf("%d", &n);
    } while (n>20 || n<1);
    // Calcul de n!
    for (int i = 1 ; i <= n ; ++i)
    {
        n_factoriel = n_factoriel * i;
    }
    // Détermination de p
    while (p_factoriel <= n){
        p = p + 1;
        p_factoriel = p_factoriel * p;
    }
    p = p - 1;
    // Affichage de n!
    printf("%d! = %lld\n", n, n_factoriel);
    // Affichage de p
    printf("p = %d\n", p);
    return 0;
}
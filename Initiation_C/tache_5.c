// Importation stdio.h
#include <stdio.h>

// Déclaration des variables
int secondes;
int minutes = 0;
int heures = 0;

// Boucle principale
int main(){
    // Saisis de l'heure en secondes
    printf("Saisir l'heure en secondes\n");
    scanf("%d", &secondes);
    // Calcul des minutes
    while (secondes>=60){
        secondes = secondes - 60;
        minutes = minutes + 1;
    }
    // Calcul des heures
    while (minutes>=60){
        minutes = minutes - 60;
        heures = heures + 1;
    }
    // Affichage l'heure en heures : minutes : secondes
    printf("L'heure est %d : %d : %d\n", heures, minutes, secondes);
    return 0;
}
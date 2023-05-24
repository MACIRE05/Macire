#include <stdio.h>
#include <stdlib.h>

int main() {
    // Déclaration des variables
    int choixJoueur;
    int caractéristiques[5] = {10, 8, 5, 3, 12};
    char nom[20];
    float score = 0.0;
    int tresorsTrouves = 0;
    int i;

    // Affichage des données
    printf("Bienvenue dans le mini-jeu textuel !\n");

    // Demande d'informations au joueur
    printf("Veuillez entrer votre nom : ");
    scanf("%s", nom);

    // Boucle principale du jeu
    while (tresorsTrouves < 3) {
        // Affichage des options disponibles
        printf("\nQue voulez-vous faire ?\n");
        printf("1. Explorer l'environnement\n");
        printf("2. Consulter les caractéristiques\n");
        printf("3. Quitter le jeu\n");

        // Demande au joueur de faire un choix
        printf("Entrez votre choix : ");
        scanf("%d", &choixJoueur);

        // Utilisation des conditions pour modifier l'état du jeu
        if (choixJoueur == 1) {
            // Boucle pour chercher des trésors
            for (i = 0; i < 5; i++) {
                printf("Vous cherchez un trésor...\n");
                // Simulation de la recherche d'un trésor
                // ...
                // Si un trésor est trouvé
                tresorsTrouves++;
                printf("Félicitations, vous avez trouvé un trésor !\n");
            }
        } else if (choixJoueur == 2) {
            // Affichage des caractéristiques
            printf("Vos caractéristiques :\n");
            for (i = 0; i < 5; i++) {
                printf("Caractéristique %d : %d\n", i + 1, caractéristiques[i]);
            }
        } else if (choixJoueur == 3) {
            // Quitter le jeu
            printf("Merci d'avoir joué !\n");
            break;
        } else {
            // Choix invalide
            printf("Choix invalide. Veuillez réessayer.\n");
        }
    }

    return 0;
}

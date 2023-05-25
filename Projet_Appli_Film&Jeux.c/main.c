#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestionnaire_films_jeux.h"
#include "statistiques.h"

// Fonction pour afficher le menu
void afficher_menu() {
    printf("===== Menu =====\n");
    printf("1. Ajouter un nouveau film ou jeu\n");
    printf("2. Modifier les informations d'un film ou jeu\n");
    printf("3. Supprimer un film ou jeu\n");
    printf("4. Afficher les informations sur tous les films et jeux\n");
    printf("5. Générer des statistiques\n");
    printf("6. Rechercher un film ou jeu\n");
    printf("7. Quitter\n");
}

int main() {
    GestionnaireFilmsJeux gestionnaire;  // Instance du gestionnaire de films et jeux
    Statistiques statistiques;  // Instance des statistiques

    initialiser_gestionnaire(&gestionnaire);  // Initialisation du gestionnaire

    while (1) {
        afficher_menu();  // Affiche le menu

        int choix;
        printf("Entrez votre choix : ");
        scanf("%d", &choix);  // Lit le choix de l'utilisateur

        switch (choix) {
            case 1:
                ajouter_film_jeu(&gestionnaire);  // Appel de la fonction pour ajouter un nouveau film ou jeu
                break;
            case 2:
                modifier_film_jeu(&gestionnaire);  // Appel de la fonction pour modifier les informations d'un film ou jeu
                break;
            case 3:
                supprimer_film_jeu(&gestionnaire);  // Appel de la fonction pour supprimer un film ou jeu
                break;
            case 4:
                afficher_tous_les_films_jeux(&gestionnaire);  // Appel de la fonction pour afficher les informations sur tous les films et jeux
                break;
            case 5:
                generer_statistiques(&statistiques, &gestionnaire);  // Appel de la fonction pour générer des statistiques
                break;
            case 6:
                rechercher_film_jeu(&gestionnaire);  // Appel de la fonction pour rechercher un film ou jeu
                break;
            case 7:
                printf("Au revoir !\n");
                liberer_gestionnaire(&gestionnaire);  // Libère la mémoire utilisée par le gestionnaire
                exit(0);  // Quitte le programme
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    }

    return 0;
}

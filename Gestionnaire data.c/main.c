#include <stdio.h>
#include "operations.h"
#include "utilitaires.h"

int main() {
    int choix = 0;
    int stock = 0;
    float prix = 0.0;
    char nom[50];

    // Exemple de boucle pour afficher un menu de choix
    while (choix != 4) {
        afficherMenu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez le nom de l'ordinateur : ");
                scanf("%s", nom);
                printf("Entrez le prix de l'ordinateur : ");
                scanf("%f", &prix);
                ajouterOrdinateur(nom, prix);
                break;
            case 2:
                afficherOrdinateurs();
                break;
            case 3:
                printf("Entrez le nom de l'ordinateur : ");
                scanf("%s", nom);
                modifierStock(nom, &stock);
                break;
            case 4:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    }

    return 0;
}

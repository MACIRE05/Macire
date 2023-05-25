#include <stdio.h>
#include "operations.h"

// Exemple de tableau de structures pour stocker les informations des ordinateurs
Ordinateur ordinateurs[MAX_ORDINATEURS];
int nombreOrdinateurs = 0;

void ajouterOrdinateur(char nom[50], float prix) {
    if (nombreOrdinateurs < MAX_ORDINATEURS) {
        Ordinateur nouvelOrdinateur;
        strcpy(nouvelOrdinateur.nom, nom);
        nouvelOrdinateur.prix = prix;
        nouvelOrdinateur.stock = 0;

        ordinateurs[nombreOrdinateurs] = nouvelOrdinateur;
        nombreOrdinateurs++;

        printf("L'ordinateur a ete ajoute avec succes.\n");
    } else {
        printf("Impossible d'ajouter un nouvel ordinateur. Nombre maximum atteint.\n");
    }
}

void afficherOrdinateurs() {
    if (nombreOrdinateurs > 0) {
        printf("Liste des ordinateurs disponibles :\n");
        for (int i = 0; i < nombreOrdinateurs; i++) {
            printf("%d. Nom: %s\n", i + 1, ordinateurs[i].nom);
            printf("   Prix: %.2f\n", ordinateurs[i].prix);
            printf("   Stock: %d\n", ordinateurs[i].stock);
        }
    } else {
        printf("Aucun ordinateur disponible.\n");
    }
}

void modifierStock(char nom[50], int* stock) {
    int index = -1;
    for (int i = 0; i < nombreOrdinateurs; i++) {
        if (strcmp(ordinateurs[i].nom, nom) == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Entrez le nouveau stock : ");
        scanf("%d", stock);
        ordinateurs[index].stock = *stock;
        printf("Le stock a ete mis a jour avec succes.\n");
    } else {
        printf("L'ordinateur n'a pas ete trouve.\n");
    }
}

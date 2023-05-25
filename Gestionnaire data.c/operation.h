#ifndef OPERATIONS_H
#define OPERATIONS_H

#define MAX_ORDINATEURS 100

typedef struct {
    char nom[50];
    float prix;
    int stock;
} Ordinateur;

void ajouterOrdinateur(char nom[50], float prix);
void afficherOrdinateurs();
void modifierStock(char nom[50], int* stock);

#endif

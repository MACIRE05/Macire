#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int nombre_a_deviner = rand() % 100 + 1;
    int tentatives = 0;

    printf("Bienvenue dans le jeu de devinette !\n");

    while (1) {
        int nombre_devine;
        printf("Devinez le nombre (entre 1 et 100) : ");
        scanf("%d", &nombre_devine);
        tentatives++;

        if (nombre_devine < nombre_a_deviner) {
            printf("C'est plus petit !\n");
        } else if (nombre_devine > nombre_a_deviner) {
            printf("C'est plus grand !\n");
        } else {
            printf("Félicitations ! Vous avez trouvé le nombre en %d tentatives.\n", tentatives);
            break;
        }
    }

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int nombre_a_deviner = rand() % 100 + 1;
    int tentatives = 0;

    std::cout << "Bienvenue dans le jeu de devinette !" << std::endl;

    while (true) {
        int nombre_devine;
        std::cout << "Devinez le nombre (entre 1 et 100) : ";
        std::cin >> nombre_devine;
        tentatives++;

        if (nombre_devine < nombre_a_deviner) {
            std::cout << "C'est plus petit !" << std::endl;
        } else if (nombre_devine > nombre_a_deviner) {
            std::cout << "C'est plus grand !" << std::endl;
        } else {
            std::cout << "Félicitations ! Vous avez trouvé le nombre en " << tentatives << " tentatives." << std::endl;
            break;
        }
    }

    return 0;
}

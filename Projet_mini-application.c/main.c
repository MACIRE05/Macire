/*
// Commentaire sur le contenu des autres modules
#include "myapp.h" // Définition de la classe MyApp
#include "student.h" // Définition de la structure Student
#include "teacher.h" // Définition de la structure Teacher
*/

#include <stdio.h>
#include <stdlib.h>
#include "myapp.h"

int main() {
    struct MyApp app;
    launch(&app);
    use(&app);
    quit(&app);
    return 0;
}

#include <stdio.h>
#include "myapp.h"

void launch(struct MyApp *app) {
    sprintf(app->app_name, "MyApp");
    printf("Launching %s\n", app->app_name);
}

void use(struct MyApp *app) {
    create_students(app);
    create_teachers(app);
    print_students(app);
    print_teachers(app);
}

void quit(struct MyApp *app) {
    printf("Quitting %s\n", app->app_name);
}

void create_students(struct MyApp *app) {
    int i;
    for (i = 0; i < 5; i++) {
        struct Student student;
        sprintf(student.name, "Student %d", i+1);
        student.age = 20 + i;
        app->students[i] = student;
    }
}

void create_teachers(struct MyApp *app) {
    int i;
    for (i = 0; i < 5; i++) {
        struct Teacher teacher;
        sprintf(teacher.name, "Teacher %d", i+1);
        sprintf(teacher.subject, "Mathematics");
        app->teachers[i] = teacher;
    }
}

void print_students(struct MyApp *app) {
    int i;
    printf("Students:\n");
    for (i = 0; i < 5; i++) {
        struct Student student = app->students[i];
        printf("%s - Age: %d\n", student.name, student.age);
    }
}

void print_teachers(struct MyApp *app) {
    int i;
    printf("Teachers:\n");
    for (i = 0; i < 5; i++) {
        struct Teacher teacher = app->teachers[i];
        printf("%s - Subject: %s\n", teacher.name, teacher.subject);
    }
}

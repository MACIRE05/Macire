#ifndef MYAPP_H
#define MYAPP_H

#include "student.h"
#include "teacher.h"

struct MyApp {
    char app_name[20];
    char university_name[20];
    struct Student students[5];
    struct Teacher teachers[5];
};

void launch(struct MyApp *app);
void use(struct MyApp *app);
void quit(struct MyApp *app);
void create_students(struct MyApp *app);
void create_teachers(struct MyApp *app);
void print_students(struct MyApp *app);
void print_teachers(struct MyApp *app);

#endif  // MYAPP_H

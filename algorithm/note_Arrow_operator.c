#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[80];
    int age;
    float percentage;
};

struct student *emp = NULL;

int main()
{
    // Assigning memory to struct variable emp
    emp = (struct student *)
        malloc(sizeof(struct student));

    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 19;

    printf("%d", emp->age);

    return 0;
}
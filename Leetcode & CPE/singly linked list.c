#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[10];
    int ch_score,en_score,math_score;
    struct Student *next;
};

struct Student* createStudent(char name[], int ch_score, int en_score, int math_score) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed\n");
        exit(4);
    }
    strcpy(newStudent->name, name);
    newStudent->ch_score = ch_score;
    newStudent->en_score = en_score;
    newStudent->math_score = math_score;
    newStudent->next = NULL;
    return newStudent;
}

void insertStudentAtEnd(struct Student **head, char name[],  int ch_score, int en_score, int math_score) {
    struct Student *newStudent = createStudent(name, ch_score, en_score, math_score); 

    if (*head == NULL) {
        *head = newStudent;
        return;
    }

    struct Student *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newStudent;
}

void calculateSubjectTotal(struct Student *head, int numStudents) {
    int ch_total = 0, en_total = 0, math_total = 0;
    float ch_average = 0, en_average = 0, math_average = 0;

    struct Student *temp = head;

    while (temp != NULL) {
        ch_total += temp->ch_score;
        en_total += temp->en_score;
        math_total += temp->math_score;
        temp = temp->next;
    }

    ch_average = (float)ch_total / numStudents;
    en_average = (float)en_total / numStudents;
    math_average = (float)math_total / numStudents;

    printf("Total:\t\t%d\t%d\t%d\n", ch_total, en_total, math_total);
    printf("Average:\t%.2f\t%.2f\t%.2f\n", ch_average, en_average, math_average);
}


void searchStudent(struct Student *head, char searchName[]) {
    struct Student *temp = head;

    while (temp != NULL) {
        if (strcmp(temp->name, searchName) == 0) {
            printf("Name\t\tCH\tEN\tMath\n");
            printf("--------------------------------------------\n");
            printf("%-15s\t%d\t%d\t%d\n", temp->name, temp->ch_score, temp->en_score, temp->math_score);
            return;
        }
        temp = temp->next;
    }

    printf("Student with name '%s' not found.\n", searchName);
}

void freeStudentList(struct Student *head) {
    struct Student *before_head;
    while (head != NULL) {
        before_head = head;
        head = head->next;
        free(before_head);
    }
}

void printStudentList(struct Student *head) {
    printf("Name\t\tCH\tEN\tMath\n");
    printf("--------------------------------------------\n");
    while (head != NULL) {
        printf("%-15s\t%d\t%d\t%d\n", head->name, head->ch_score, head->en_score, head->math_score);
        head = head->next;
    }
}

int main() {
    struct Student *head = NULL;
    int numStudents;
    char searchName[10];
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        char name[10];
        int ch_score,en_score,math_score;
        printf("Enter the number %d student's name: ", i + 1);
        scanf("%s", name);
        printf("Enter the number %d student's score: ", i + 1);
        scanf("%d %d %d", &ch_score, &en_score, &math_score);
        insertStudentAtEnd(&head, name, ch_score, en_score, math_score);
    }

    printf("\nStudent Information List:\n");
    printStudentList(head);
    printf("--------------------------------------------\n");
    calculateSubjectTotal(head, numStudents);
    printf("--------------------------------------------\n");

    while (1) {
        printf("Pls enter the student's name and we'll search his information (or type 'exit' to quit):\n");
        scanf("%s", searchName);
        if (strcmp(searchName, "exit") == 0) {
            break;
        }
        searchStudent(head, searchName);
    }

    freeStudentList(head);

    printf("\nEnter anything to exit the program...\n");
    getchar();
    getchar();
}

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
        exit(404);
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
    struct Student *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
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

// 函數：保存學生信息到文件
void saveStudentListToFile(struct Student *head) {
    FILE *fp = fopen("student_scores.txt", "w"); // 打開文件以寫入模式

    if (fp == NULL) { // 檢查文件是否成功打開
        printf("Error opening file for writing.\n");
        return;
    }

    while (head != NULL) { // 遍歷學生列表，將信息寫入文件
        fprintf(fp, "%s %d %d %d\n", head->name, head->ch_score, head->en_score, head->math_score);
        head = head->next;
    }

    fclose(fp); // 關閉文件
}

// 函數：從文件中讀取學生信息
void loadStudentListFromFile(struct Student **head) {
    FILE *fp = fopen("student_scores.txt", "r"); // 打開文件以讀取模式

    if (fp == NULL) { // 檢查文件是否成功打開
        printf("Error opening file for reading.\n");
        return;
    }

    char name[10];
    int ch_score, en_score, math_score;

    while (fscanf(fp, "%s %d %d %d", name, &ch_score, &en_score, &math_score) != EOF) {
        insertStudentAtEnd(head, name, ch_score, en_score, math_score); // 插入讀取到的學生信息到學生列表
    }

    fclose(fp); // 關閉文件
}

int main() {
    struct Student *head = NULL; // 初始化空串列

    char choice;

    printf("Do you want to load existing student scores from file? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        loadStudentListFromFile(&head); // 從文件中讀取學生信息
    }

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        char name[10];
        int ch_score, en_score, math_score;
        printf("Enter the number %d student's name: ", i + 1);
        scanf("%s", name);
        printf("Enter the number %d student's score: ", i + 1);
        scanf("%d %d %d", &ch_score, &en_score, &math_score);
        insertStudentAtEnd(&head, name, ch_score, en_score, math_score); // 插入學生到串列尾部
    }

    // 列印學生信息列表
    printf("\nStudent Information List:\n");
    printStudentList(head);

    // 保存學生信息到文件
    printf("\nDo you want to save student scores to file? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        saveStudentListToFile(head); // 保存學生信息到文件
    }

    // 釋放動態分配的內存
    freeStudentList(head);

    printf("\nEnter anything to exit the program...\n");
    getchar();
    getchar(); // 等待用戶按下 Enter 鍵

    return 0;
}

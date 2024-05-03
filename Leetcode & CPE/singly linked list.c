#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 學生結構體
struct Student {
    char name[50];    // 學生姓名
    int score;        // 科目成績
    struct Student *next;  // 指向下一個學生的指針
};

// 函數：創建一個新的學生節點
struct Student* createStudent(char name[], int score) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student)); // 分配節點內存
    if (newStudent == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newStudent->name, name); // 初始化學生姓名
    newStudent->score = score;      // 初始化學生成績
    newStudent->next = NULL;        // 新學生指向空指針
    return newStudent;
}

// 函數：在串列尾部插入一個學生節點
void insertStudentAtEnd(struct Student **head, char name[], int score) {
    struct Student *newStudent = createStudent(name, score); // 創建新學生節點

    if (*head == NULL) { // 如果串列為空
        *head = newStudent; // 將新學生設為頭節點
        return;
    }

    struct Student *temp = *head;
    while (temp->next != NULL) { // 找到串列最後一個節點
        temp = temp->next;
    }
    temp->next = newStudent; // 將新學生節點插入到最後一個節點後面
}

// 函數：釋放動態分配的學生節點內存
void freeStudentList(struct Student *head) {
    struct Student *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// 函數：列印學生信息列表
void printStudentList(struct Student *head) {
    printf("Name\t\tScore\n");
    printf("-------------------\n");
    while (head != NULL) {
        printf("%-15s\t%d\n", head->name, head->score);
        head = head->next;
    }
}

int main() {
    struct Student *head = NULL; // 初始化空串列

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        char name[50];
        int score;
        printf("Enter the name and score of student %d: ", i + 1);
        scanf("%s %d", name, &score);
        insertStudentAtEnd(&head, name, score); // 插入學生到串列尾部
    }

    // 列印學生信息列表
    printf("\nStudent Information List:\n");
    printStudentList(head);

    // 釋放動態分配的內存
    freeStudentList(head);

    printf("\nPress Enter to exit the program...");
    getchar();
    getchar(); // 等待用戶按下 Enter 鍵

    return 0;
}


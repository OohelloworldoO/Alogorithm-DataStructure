#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[10];
    int ch_score,en_score,math_score;
    struct Student *next;
};

struct Student* createStudent(char name[], int ch_score, int en_score, int math_score) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student)); // 分配節點內存
    if (newStudent == NULL) {
        printf("Memory allocation failed\n");
        exit(404);
    }
    strcpy(newStudent->name, name); // 初始化學生姓名
    newStudent->ch_score = ch_score;      // 初始化學生成績
    newStudent->en_score = en_score;      // 初始化學生成績
    newStudent->math_score = math_score;      // 初始化學生成績
    newStudent->next = NULL;        // 新學生指向空指針
    return newStudent;
}

// 函數：在串列尾部插入一個學生節點
void insertStudentAtEnd(struct Student **head, char name[],  int ch_score, int en_score, int math_score) {
    struct Student *newStudent = createStudent(name, ch_score, en_score, math_score); // 創建新學生節點

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

void calculateSubjectTotal(struct Student *head, int numStudents) {
    int ch_total = 0, en_total = 0, math_total = 0;
    float ch_average = 0, en_average = 0, math_average = 0;

    struct Student *temp = head; // 使用一個臨時指針來遍歷鏈表

    while (temp != NULL) {
        ch_total += temp->ch_score;
        en_total += temp->en_score;
        math_total += temp->math_score;
        temp = temp->next;
    }

    // 計算平均成績時要將總分除以學生數
    ch_average = (float)ch_total / numStudents;
    en_average = (float)en_total / numStudents;
    math_average = (float)math_total / numStudents;

    printf("Total:\t\t%d\t%d\t%d\n", ch_total, en_total, math_total);
    printf("Average:\t%.2f\t%.2f\t%.2f\n", ch_average, en_average, math_average);
}


// 函數：根據學生姓名查找並打印學生信息
void searchStudent(struct Student *head, char searchName[]) {
    struct Student *temp = head;

    while (temp != NULL) {
        if (strcmp(temp->name, searchName) == 0) {
            printf("Name\t\tCH\tEN\tMath\n");
            printf("--------------------------------------------\n");
            printf("%-15s\t%d\t%d\t%d\n", temp->name, temp->ch_score, temp->en_score, temp->math_score);
            return; // 找到學生後退出函式
        }
        temp = temp->next;
    }

    // 如果找不到匹配的姓名
    printf("Student with name '%s' not found.\n", searchName);
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
    printf("Name\t\tCH\tEN\tMath\n");
    printf("--------------------------------------------\n");
    while (head != NULL) {
        printf("%-15s\t%d\t%d\t%d\n", head->name, head->ch_score, head->en_score, head->math_score);
        head = head->next;
    }
}

int main() {
    struct Student *head = NULL; // 初始化空串列

    int numStudents;
    char searchName[50];
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        char name[50];
        int ch_score,en_score,math_score;
        printf("Enter the number %d student's name: ", i + 1);
        scanf("%s", name);
        printf("Enter the number %d student's score: ", i + 1);
        scanf("%d %d %d", &ch_score, &en_score, &math_score);
        insertStudentAtEnd(&head, name, ch_score, en_score, math_score); // 插入學生到串列尾部
    }

    // 列印學生信息列表
    printf("\nStudent Information List:\n");
    printStudentList(head);
    printf("--------------------------------------------\n");
    calculateSubjectTotal(head, numStudents);
    printf("--------------------------------------------\n");

    // 使用一個無限循環，直到用戶輸入一個特定的命令來退出
    while (1) {
        printf("Please enter the student's name and we'll search his information (or type 'exit' to quit):\n");
        scanf("%s", searchName);

        // 如果用戶輸入 'exit'，退出循環
        if (strcmp(searchName, "exit") == 0) {
            break;
        }

        // 否則搜索並列印學生資訊
        searchStudent(head, searchName);
    }

    // 釋放動態分配的內存
    freeStudentList(head);

    printf("\nEnter anything to exit the program...\n");
    getchar();
    getchar(); // 等待用戶按下 Enter 鍵

    return 0;
}

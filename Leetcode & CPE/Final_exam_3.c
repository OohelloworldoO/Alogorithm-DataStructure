#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構體
struct Student
{
    char name[50];
    char student_id[20];
    int math_score;
    int english_score;
    struct Student *next;
};

// 創建新學生節點函數
struct Student *createStudent(char name[], char student_id[], int math_score, int english_score)
{
    // 分配記憶體給新學生節點
    struct Student *newStudent = (struct Student *)malloc(sizeof(struct Student));
    if (newStudent == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    // 複製學生資料到節點中
    strcpy(newStudent->name, name);
    strcpy(newStudent->student_id, student_id);
    newStudent->math_score = math_score;
    newStudent->english_score = english_score;
    newStudent->next = NULL;
    return newStudent;
}

// 在串列末尾插入新學生節點
void insertStudentAtEnd(struct Student **head, char name[], char student_id[], int math_score, int english_score)
{
    struct Student *newStudent = createStudent(name, student_id, math_score, english_score);

    if (*head == NULL)
    {
        *head = newStudent;
        return;
    }

    struct Student *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newStudent;
}

// 列印學生列表
void printStudentList(struct Student *head)
{
    printf("\nStudent Information List:\n");
    printf("Name\t\tStudent ID\tMath Score\tEnglish Score\n");
    printf("---------------------------------------------------------\n");
    while (head != NULL)
    {
        printf("%-15s\t%-12s\t%d\t\t%d\n", head->name, head->student_id, head->math_score, head->english_score);
        head = head->next;
    }
    printf("---------------------------------------------------------\n");
}

int main()
{
    struct Student *head = NULL; // 首節點指標初始化為NULL
    char name[50], student_id[20];
    int math_score, english_score;
    char choice;

    do
    {
        // 提示用戶輸入學生信息
        printf("Enter student name: ");
        scanf("%s", name);
        printf("Enter student ID: ");
        scanf("%s", student_id);
        printf("Enter math score: ");
        scanf("%d", &math_score);
        printf("Enter English score: ");
        scanf("%d", &english_score);

        // 插入新學生節點到串列中
        insertStudentAtEnd(&head, name, student_id, math_score, english_score);

        // 詢問用戶是否繼續輸入
        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice); // 注意：這裡使用了空格來跳過上一次的換行符

    } while (choice == 'y' || choice == 'Y');

    // 列印學生列表
    printStudentList(head);

    // 釋放動態分配的記憶體
    struct Student *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

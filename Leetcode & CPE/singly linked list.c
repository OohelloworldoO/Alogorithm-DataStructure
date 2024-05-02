#include <stdio.h>
#include <stdlib.h>

// 定義單向串列節點結構
struct Node {
    int data;           // 節點的數據
    struct Node *next;  // 指向下一個節點的指針
};

// 函數：創建新節點
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // 分配節點內存
    if (newNode == NULL) {
        printf("內存分配失敗\n");
        exit(1);
    }
    newNode->data = data; // 初始化節點數據
    newNode->next = NULL; // 新節點指向空指針
    return newNode;
}

// 函數：在串列尾部插入新節點
void insertAtEnd(struct Node **head, int data) {
    struct Node *newNode = createNode(data); // 創建新節點
    if (*head == NULL) { // 如果串列為空
        *head = newNode; // 將新節點設為頭節點
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) { // 找到串列最後一個節點
        temp = temp->next;
    }
    temp->next = newNode; // 將新節點插入到最後一個節點後面
}

// 函數：打印串列中的所有節點
void printList(struct Node *head) {
    while (head != NULL) { // 遍歷串列，打印每個節點的數據
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// 主函數
int main() {
    struct Node *head = NULL; // 初始化串列為空

    // 在串列尾部插入一些節點
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // 打印串列中的所有節點
    printf("串列中的節點: ");
    printList(head);

    return 0;
}

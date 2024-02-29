/*
      印出結果:
            a
          b    c
       d  e  f  g
前敘(preorder): 中->左->右  a->b->d->e->c->f->g
中敘(inorder):  左->中->右  d->b->e->a->f->c->g 由小到大依序遍歷
後敘(postorder):左->右->中  d->e->b->f->g->c->a

限定輸入5 6 7 8 9
*/
#include <stdio.h>
#include <stdlib.h>

// 存放兩個分支的記憶體位置及該節點的數值
typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} node;

// 新增節點
node *createNode(int value)
{
    node *newnode = malloc(sizeof(node)); // malloc配置記憶體大小 sizeof()->取得變數位元組大小 or 取得陣列大小
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// 由左到右 由根部往葉子(preorder) 先拜訪父節點再拜訪左右節點的方法將樹印出，並且每往下一個層級多印一個tab鍵
// 傳level給printTabs函式判斷
void printTabs(int numtabs)
{
    for (int i = 0; i < numtabs; i++)
    {
        printf("\t");
    }
}

void printTreeRecursive(node *root, int level)
{
    if (root == NULL)
    {
        printTabs(level);
        printf("---<no numbers>---\n");
        return;
    }

    printTabs(level);
    printf("value = %d\n", root->value);

    printTabs(level);
    printf("left\n");
    printTreeRecursive(root->left, level + 1);

    printTabs(level);
    printf("right\n");
    printTreeRecursive(root->right, level + 1);

    printTabs(level);
    printf("Done\n");
}
// 是這種recursive-> printTree( printTreeRecursive( printTabs() ) )
void printTree(node *root)
{
    printTreeRecursive(root, 0);
}

int main()
{
    int a, b, c, d, e;
    printf("pls enter 5 6 7 8 9:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    node *node1 = createNode(a);
    node *node2 = createNode(b);
    node *node3 = createNode(c);
    node *node4 = createNode(d);
    node *node5 = createNode(e);

    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node3->right = node5;

    printTree(node1);

    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}
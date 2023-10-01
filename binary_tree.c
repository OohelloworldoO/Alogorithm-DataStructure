#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} node;

node *createNode(int value)
{
    node *newnode = malloc(sizeof(node));
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

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
        printTabs(levels);
        printf("---<empty>---\n");
        return;
    }
}
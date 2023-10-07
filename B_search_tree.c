#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool insertNumber(node **rootptr, int value)
{
    node *root = (*rootptr);

    if (root == NULL)
    {
        (*rootptr) = createNode(value)
    }
}
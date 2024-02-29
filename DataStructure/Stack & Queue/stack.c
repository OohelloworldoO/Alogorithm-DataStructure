#include <stdio.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define INT_MIN (-2143543543)
#define STACK_EMPTY INT_MIN

int stack[STACK_LENGTH];
int top = EMPTY;

bool push(int value) // push整數進stack，如果top內存的數字>=stack內存空間 => return false
{
    if (top >= STACK_LENGTH - 1)
        return false;

    top++;
    stack[top] = value;
    return true;
}

int pop()
{
    if (top == EMPTY)
        return STACK_EMPTY;

    int result = stack[top];
    top--;
    return result;
}

int main()
{
    int a, b, c;
    printf("this stack only can save 5 numbers\n");
    printf("pls enter three integer number:\n");
    scanf("%d %d %d", &a, &b, &c);
    push(a);
    push(b);
    push(c);

    int t;
    printf("stack=\n");
    while ((t = pop()) != STACK_EMPTY)
    {
        printf("|%d|\n", t);
    }
    return 0;
}

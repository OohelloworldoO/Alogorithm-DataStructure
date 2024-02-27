#include <stdio.h>
#include <stdbool.h>

#define QUEUE_LENGTH 5 // 位址為0~4
#define EMPTY (-1)
#define INT_MIN (-2147483648)
#define QUEUE_EMPTY INT_MIN

int queue[QUEUE_LENGTH];
int tail = -1;
int head = -1;

bool enqueue(int value)
{
    if (tail >= QUEUE_LENGTH - 1) // 下面的位址 < queue長度
        return false;

    tail++;              // 如果是第一個放進queue的 就是在queue的第0個位址
    queue[tail] = value; // 最新的數字存到queue中目前tail位址
    return true;
}

int dequeue()
{
    if (tail == EMPTY)
        return QUEUE_EMPTY;

    int result = queue[head + 1];

    for (int i = 1; i <= tail; i++)
        queue[i - 1] = queue[i];
    tail--;
    return result;
}

int main()
{
    int a, b, c;
    printf("Enter three int numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    enqueue(a);
    enqueue(b);
    enqueue(c);

    int t; // denote value
    while ((t = dequeue()) != QUEUE_EMPTY)
    {
        printf("queue= %d\n", t);
    }
    return 0;
}

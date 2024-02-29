#include <stdio.h>
#include <stdlib.h>

#define WIDTH 50
#define HEIGHT 50

enum TILE_TYPES
{
    EMPTY,
    FILLED,
    UP,
    DOWN
};

void penUp(int x, int y);
void penDown(int x, int y);
int turnRight(void);
int turnLeft(void);
int draw(void);
void display(void);
int end(void);

int canvas[WIDTH][HEIGHT];

int main(int argc, char **argv)
{

    for (int j = 0; j < HEIGHT; j++)
    {
        for (int i = 0; i < WIDTH; i++)
        {
            canvas[i][j] = EMPTY;
        }
    }

    int x = 0, y = 0; // update these as turtle moves
    canvas[x][y] = UP;

    int input = -1;

    printf("Controls:\n");
    printf("1 for pen up (capital T means pen is up)\n");
    printf("2 for pen down (lowercase t means pen is down)\n");
    printf("3 for turn right\n");
    printf("4 for turn left\n");
    printf("5 for drawing, followed by an int value for how many tiles to draw\n");
    printf("6 to display drawing\n");
    printf("9 to end program\n");

    do
    {
        printf("Enter command: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            penUp(x, y);
            break;

        case 2:
            penDown(x, y);
            break;

        case 6:
            display();
            break;

        case 9:
            exit(0);
        }

    } while (input != 0);

    return 0;
}

void penDown(int x, int y)
{
    if (canvas[x][y] == UP)
    {
        canvas[x][y] = DOWN;
    }
}

void penUp(int x, int y)
{
    if (canvas[x][y] == DOWN)
    {
        canvas[x][y] = UP;
    }
}

void display(void)
{

    for (int j = 0; j < HEIGHT; j++)
    {
        for (int i = 0; i < WIDTH; i++)
        {
            switch (canvas[i][j])
            {
            case EMPTY:
                printf("%c", ' ');
                break;

            case FILLED:
                printf("%c", 'X');
                break;

            case UP:
                printf("%c", 'T');
                break;

            case DOWN:
                printf("%c", 't');
                break;
            }
        }

        printf("\n");
    }
}
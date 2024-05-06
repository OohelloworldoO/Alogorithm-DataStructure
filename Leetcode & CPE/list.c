#include <stdio.h>

int main() {
    int num[2][3][3] = {
        {{44, 55, 67}, {12, 34, 56}, {45, 78, 98}},
        {{1, 25, 63}, {44, 65, 78}, {2, 5, 6}}
    };

    int min = num[0][0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (num[i][j][k] < min) {
                    min = num[i][j][k];
                }
            }
        }
    }

    printf("The min value is: %d\n", min);
}
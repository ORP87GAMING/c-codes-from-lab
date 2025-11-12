#include <stdio.h>

int main() {
    int i, j;
    int height = 7; // Height of the letter

    for (i = 0; i < height; i++) {
        for (j = 0; j <= height; j++) {
            // Print '*' at the edges and middle row
            if ((j == 0 || j == height) && i != 0 ||
                i == 0 && j > 0 && j < height ||
                i == height / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
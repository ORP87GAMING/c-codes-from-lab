#include <stdio.h>

int main() {
    int range, i;

    // Prompt user for input
    printf("Enter the upper range: ");
    scanf("%d", &range);

    // Check if the range is valid
    if (range < 2) {
        printf("The range must be greater than or equal to 2.\n");
    } else {
        printf("Numbers between 2 and %d are:\n", range);
        for (i = 2; i <= range; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}


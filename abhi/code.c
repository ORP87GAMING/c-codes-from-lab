#include <stdio.h>

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input! Units must be greater than 0.\n");
    } else if (units <= 100) {
        printf("Category: Low Consumption (0-100 units)\n");
    } else if (units <= 300) {
        printf("Category: Moderate Consumption (101-300 units)\n");
    } else if (units <= 500) {
        printf("Category: High Consumption (301-500 units)\n");
    } else {
        printf("Category: Very High Consumption (Above 500 units)\n");
    }

    return 0;
}

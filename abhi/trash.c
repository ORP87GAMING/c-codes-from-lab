#include <stdio.h>

#define PI 3.14159  

int main() {
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("Radius: %.2f\n", radius);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
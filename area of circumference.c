#include <stdio.h>

int main() {
    float radius, circumference;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    circumference = 2 * 3.14 * radius;

    
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
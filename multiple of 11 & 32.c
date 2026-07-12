#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num % 11 == 0)
        printf("The number is a multiple of 11.\n");
    else
        printf("The number is not a multiple of 11.\n");

    
    if (num % 32 == 0)
        printf("The number is a multiple of 32.\n");
    else
        printf("The number is not a multiple of 32.\n");

    return 0;
}
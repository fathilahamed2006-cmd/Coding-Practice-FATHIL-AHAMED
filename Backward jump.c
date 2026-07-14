#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0)
        goto end;

    printf("The number is positive.\n");

end:
    printf("Program Ended.");

    return 0;
}

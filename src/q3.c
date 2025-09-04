// Write a C program that calculates the absolute value of a given number without using the built-in absolute value function.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; // Make the number positive
    }

    printf("Absolute value: %d\n", num);
    return 0;
}
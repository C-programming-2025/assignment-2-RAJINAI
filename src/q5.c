// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Ensure the input is a positive integer
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= n) {
            factorial *= i; // Multiply factorial by the current number
            i++; // Increment the counter
        }
        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}
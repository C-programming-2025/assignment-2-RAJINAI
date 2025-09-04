// Write a C program that calculates the factorial of a given number using a do-while loop.
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1; // Variable to store the factorial result
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1; // Counter variable starting from 1
        do {
            factorial *= i; // Multiply the current value of factorial by i
            i++; // Increment the counter
        } while (i <= n); // Continue until i exceeds n
        printf("Factorial of %d is %llu\n", n, factorial); // Print the result
    }
    return 0;
}
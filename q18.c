// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>
int main() {
    int n, i = 1; // Initialize counter i to 1
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Multiplication table for %d:\n", n);
    while (i <= 10) { // Loop until i exceeds 10
        printf("%d x %d = %d\n", n, i, n * i); // Print the multiplication result
        i++; // Increment the counter
    }
    return 0;
}   
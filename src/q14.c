// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);   
    printf("Factors of %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // Check if i is a factor of n
            printf("%d\n", i);
        }
    }
    return 0;
}
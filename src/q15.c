// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.
#include <stdio.h>
int main() {
    int n, i = 2; // Start checking for factors from 2
    int isPrime = 1; // Flag to indicate if n is prime  
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        while (i * i <= n) { // Check for factors up to the square root of n
            if (n % i == 0) {
                isPrime = 0; // n is divisible by i, so it's not prime
                break; // No need to check further
            }
            i++; // Increment the counter
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
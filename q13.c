// Write a C program that calculates the sum of all even numbers from 1 to 50 using a while loop.
#include <stdio.h>
int main() {
    int sum = 0; // Variable to store the sum of even numbers
    int i = 1;   // Counter variable starting from 1
    while (i <= 50) { // Loop until i reaches 50
        if (i % 2 == 0) { // Check if the number is even
            sum += i; // Add the even number to the sum
        }
        i++; // Increment the counter
    }
    printf("Sum of even numbers from 1 to 50: %d\n", sum); // Print the result
    return 0;
}
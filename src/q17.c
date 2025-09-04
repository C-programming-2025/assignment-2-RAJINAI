// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);   
    printf("Countdown from %d to 1:\n", n);
    for (int i = n; i >= 1; i--) { // Loop from n down to 1
        printf("%d\n", i); // Print the current number
    }
    return 0;
}
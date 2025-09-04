/* Write a C program that prompts the user for a positive integer and prints a pattern of asterisks (*) in a square shape using nested loops.
Example: User’s Input = 2, then pattern to print will be:
    * *
    * *
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);   
    printf("Pattern of asterisks:\n");
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n; j++) { // Loop for each column in the row
            printf("* "); // Print an asterisk followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
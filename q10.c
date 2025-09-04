/* Write a C program that prints a pattern of asterisks.
      *
     ***
    *****
*/
#include <stdio.h>
int main() {
    int i, j, k;
    int n = 3; // Number of rows for the upper half of the pattern
    for(i = 1; i <= n; i++) { // Loop for each row
        // Print leading spaces
        for(k = i; k < n; k++) {
            printf(" ");
        }
        // Print asterisks
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
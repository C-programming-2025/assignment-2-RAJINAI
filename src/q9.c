/* Write a C program that prints a pattern of asterisks.
    *****
    ****
    ***
    **
    *
*/
#include <stdio.h>
int main() {
    int i, j;
    int n = 5; // Number of rows 
    for(i = n; i >= 1; i--) { // Loop for each row
        for(j = 1; j <= i; j++) { // Loop to print asterisks in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
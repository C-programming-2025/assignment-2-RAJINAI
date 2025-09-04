/* Write a C program that prints a pattern of asterisks.
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Maximum number of stars in the middle row

    // First half of the pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Second half of the pattern
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
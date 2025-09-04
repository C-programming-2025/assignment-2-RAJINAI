// Write a C program that prompts the user for a number and prints its multiplication table up to 10 using a do-while loop.
#include <stdio.h>
int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++; 
    } while (i <= 10); 
    return 0;

}
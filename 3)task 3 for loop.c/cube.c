//Write a program in C to display the cube of the number up to an integer.

#include <stdio.h>

int main() {
    int n;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Cube of %d = %d\n", i, i * i * i);
    }

    return 0;
}















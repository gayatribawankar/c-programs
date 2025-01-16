//10.Write a C program to calculate the factorial of a given number 5.
#include<stdio.h>
int main(){
    int i=1;
    int number=5;
    int factorial=1;
    while (i<=number){
        factorial*=i;
        i++;
    }
    printf("the factorial of %d is=%d\n",number,factorial);
    return 0;
}





































// int main() {
//     int number = 5;
//     int factorial = 1;
    
//     // Using a while loop to calculate the factorial
//     int i = 1;
//     while (i <= number) {
//         factorial *= i;
//         i++;
//     }

//     // Output the result
//     printf("The factorial of %d is %d\n", number, factorial);
    
//     return 0;
// }


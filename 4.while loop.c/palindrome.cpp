//C program to find number is palindrome or not
#include<stdio.h>
int main(){
    int originalnum,num, reverse=0,remainder;
    printf("enter a number:");
    scanf("%d",&num);
    originalnum=num;
    while(num!=0){
        remainder=num % 10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if (originalnum==reverse){
        printf("%d is a palindrome. \n",originalnum);
    }else{
        printf("%d is not a palindrome.\n",originalnum);

    }
    return 0;
}


    






































 printf("Enter a number: ");
    scanf("%d", &num);

    // Storing the original number to compare later
    originalNum = num;

    // Reversing the number using a while loop
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversed = reversed * 10 + remainder;  // Append it to the reversed number
        num /= 10;                      // Remove the last digit from the number
    }

    // Checking if the original number is equal to the reversed number
    if (originalNum == reversed) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
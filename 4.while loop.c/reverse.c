//Write a C program to reverse a number.
#include<stdio.h>
void main(){
    int num,reverse=0,remainder;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0){
    remainder=num%10;    //getting last digit
    reverse=reverse*10+remainder; //append it to starting
    num/=10;                  //remove the two digit
}
printf("reverse the num:%d\n",reverse);
}













































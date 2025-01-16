//7.Write a program in C to display the multiplication table for a given integer.
#include<stdio.h>
void main(){
    int i=1,num,mul=0;
    printf("enter the value of num:");
    scanf("%d",&num);
    while(i<=10){
    mul=num*i;
    printf("%d\n",mul);
    i++;
    }

}















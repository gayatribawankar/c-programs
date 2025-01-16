//4.Write a program in C to display n terms of natural numbers and their sum.
#include<stdio.h>
void main(){
    int i=1, num, sum=0;
    printf("enter the value of num:");
    scanf("%d",&num);
    while(i<=num){
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("\n%d",sum);
}
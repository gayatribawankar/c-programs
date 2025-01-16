//9.Write a C program to display the sum of n terms of even natural numbers.
#include<stdio.h>
void main(){
    int i=1,num,sum=0;
    printf("enter the value of n term :");
    scanf("%d",&num);
    printf("the first %d odd natural numbers are:\n",num);
    while(i<=num){
        
        if(i%2==0){
        sum=sum+i;
        printf("%d\n",i);
    }
    i++;
    }
    printf("\n%d",sum);
}
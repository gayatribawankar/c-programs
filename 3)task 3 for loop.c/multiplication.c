//7.Write a program in C to display the multiplication table for a given integer
#include<stdio.h>
void main(){
    int num , result=0;
    printf("enter number:");
    scanf("%d",&num);
  
    for (int i=1; i<=10; i++){
        result=num*i;
        printf("%d\n",result);
    }
}
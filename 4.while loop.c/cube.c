//6. Write a program in C to display the cube of the number up to an integer.
#include<stdio.h>
void main(){
    int i=1,num;
    printf("enter an integer:");
    scanf("%d",&num);
    printf("cube of number %d:\n",num);
    while(i<=num){
    printf("cube of %d=%d\n",i,i*i*i);
    i++;
    }
}





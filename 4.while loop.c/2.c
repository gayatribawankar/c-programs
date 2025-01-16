#include<stdio.h>
void main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    while(num<0){
        printf("enter a positive number, try again!");
        scanf("%d",&num);
    }
    printf("enter number is %d",num);
}
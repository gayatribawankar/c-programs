#include<stdio.h>
void main(){
    int num;
    printf("enter a positive number");
    scanf("%d",&num);
    for (;num<0;){
        printf("enter positive number try again");
        scanf("%d",&num);
    }
}
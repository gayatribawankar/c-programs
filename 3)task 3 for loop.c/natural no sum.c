//sum of  natural number
#include<stdio.h>
void main(){
    int i,num, sum=0;
    printf("enter value of num:");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("%d",i);
        sum=sum+i;
    }
    printf("%d",sum);
    }

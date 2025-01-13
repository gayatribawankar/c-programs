//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>
void main(){
    int num[10];
    int sum=0;
    float average;
    printf("enter 10 numbers:");
    scanf("%d",&num);
    for(int i=0; i<10; i++){
    sum=sum+num;
    }
    average=sum%10;
    printf("sum of numbers:%d",sum);
    printf("average of number %d",average);
}

























   
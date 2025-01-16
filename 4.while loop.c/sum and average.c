//5.Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>
void main(){
    int i=1, num, sum=0;
    float average;
    
    while(i<=10){
        printf("enter the 10 numbers from keyboard:");
    scanf("%d",&num);
        
        sum=sum+num;
        average=sum%10;
        i++;
    }
    printf("%d\n",sum);
    printf("%f\n",average);
}
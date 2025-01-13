//sum of n terms of even natural numbers
#include<stdio.h>
void main()
{
    int num, sum=0;
    printf("enter the n terms number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
    sum+=2*i;
    }
printf("sum of evennumber %d is: %d\n",num,sum);

}












































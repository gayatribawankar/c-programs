#include <stdio.h>
void main()
{
    int a[3][3],i,j;
    int sum=0;

printf("enter the element of the matrix:-");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        scanf("%d", &a[i][j]);
    }

 }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }

    printf("the sum of the element of the matrix is %d", sum);

}
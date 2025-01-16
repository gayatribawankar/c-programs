//Write a program in C to find the sum of the right diagonals of a matrix. 
#include<stdio.h>
void main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                sum=sum+A[i][j];
            }
        }
    }printf("sum of right diagonal of matrix is:%d\n",sum);
}
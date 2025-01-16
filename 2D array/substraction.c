//.Write a program in C for the subtraction of two matrices.
#include<stdio.h>
void main(){
    int A[2][2], B[2][2], C[2][2],i,j;
    printf("enterd an array elemnets A:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter elements of array B:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("substraction of two matrices:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

            C[i][j]=A[i][j]-B[i][j];
        }     
    }for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
















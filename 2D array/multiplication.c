//Write a program in C for the multiplication of two square matrices
#include<stdio.h>
void main(){
    int A[2][2], B[2][2], C[2][2],i,j,k=0;
    printf("enter an element of array A:");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter an element of array B:");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("multiplication of two array:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            C[i][j]=0;
            for(k=0;k<2;k++){
C[i][j]=C[i][j]+A[i][k]*B[k][j];

            }
            
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t",C[i][j]);
        }printf("\n");
    }

}
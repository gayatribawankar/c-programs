//Write a program in C to accept two matrices and check whether they are equal 
#include<stdio.h>
void main(){
    int A[3][3],B[3][3],i,j,equal=0;
    printf("enter the elements of first matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);

        }
    }printf("enter the elements of second matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    if(A[i][j]!=B[i][j]){
        printf("the matrices are not equal\n");
    }
    else{
        printf("matrices are equal\n");
    }
    
}
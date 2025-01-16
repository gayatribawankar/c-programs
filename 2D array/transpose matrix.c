//. Write a program in C to find the transpose of a given matrix. 
#include<stdio.h>
void main(){
    int matrix[2][2],transpose=0,i,j;;
    printf("enterd an array elemnets A:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
   
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",matrix[i][j]);
        }printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    
 
}
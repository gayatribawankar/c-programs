//nestde while
#include<stdio.h>
void main(){
    int i=1;  //initialization of outer loop
    while(i<=4){  //condition for ouetr loop
    int j=1;     //initialization of inner loop
        while(j<=i){  //condition of inner loop
            printf("*");  //statement
            j++;  //updation
        }
        printf("\n");
        i++;
    }

}
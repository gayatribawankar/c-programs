/*Q10.write a program in c to print 
1
22
333
4444*/
#include<stdio.h>
void main(){
    int i,j;
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d",i);
        }printf("\n");
    }
}
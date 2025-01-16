/*Q2.write a program in c to print 
1111
2222
3333
4444*/
#include<stdio.h>
void main(){
    int i,j;
    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){
            printf("%d",i);  //for same value print use i
        }
        printf("\n");
    }
}

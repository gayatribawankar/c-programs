/*Q6.write a program in c to print 
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA*/
#include<stdio.h>
void main(){
    char ch;
    int i,j;
    for(i=4; i>=0; i--){
        for(j=4; j>=0; j--){
            ch='A'+i;
            printf("%c",ch);
        }printf("\n");
    }
}
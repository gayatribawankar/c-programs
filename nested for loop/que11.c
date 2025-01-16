/*Q11.write a program in c to print 
A
AB
ABC
ABCD*/
#include<stdio.h>
void main(){
    char ch;
    int i,j;
    for(i=0; i<=4; i++){
        for(ch='A'; ch<'A'+i; ch++){
            
            printf("%c",ch);
        }printf("\n");
    }
}


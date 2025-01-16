/*Q write a program in c to print 
AAAA
BBBB
CCCC
DDDD*/
#include<stdio.h>
void main(){
    char ch;
    int i,j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            ch='A'+i;
            printf("%c",ch);
        }
        printf("\n");
    }
}
